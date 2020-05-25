#pragma once
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "AbstractFactory.h"
#include <vector>
#include "Entity.h"
#include "settings.h"
#include <time.h>

using namespace std;
using namespace game_settings;

namespace game_Core {

	class GameObject {

	public:
		GameObject(AbstractFactory* AF, settings* s);
		~GameObject();
		int init();
		int loop();

	protected:
		int getLane();
		int getRandom();
		bool checkCollision(Entity* e, Entity* p);
		void resetEnemies();
		void setEnemyRandomPos(Entity* e);
		void killPlayer();
		void updateText();
		void levelUp();
		void spawnCars(int amount);
		void removeCarOverlap();
		int checkParticleCollision(Entity* particle);
		bool checkCarOverlap(Entity* e, Entity* p);

		AbstractFactory *aFact;
		Player* player;
		FPSReg* regulator;
		settings* s;
		bool quit = false;
		vector<Entity*>entities;
		int score = 0;
		int level = 1;
		int lives = 3;
		int currEnemies;
		int ammo;
		float enemySpeed, pickupSpeed;
		clock_t start, current;
		double elapsed;
	};
}
#endif // !GAMEOBJECT_H
