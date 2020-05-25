 #pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"

namespace game_Core {

	class Enemy : public Entity {

	public:
		Enemy(float x, float y, float w, float h, int type, bool dir);
		virtual ~Enemy() { };
		void move(float x, float y);
	};
}
#endif // !ENEMY_H