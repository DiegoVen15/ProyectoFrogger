#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "projectile.h"
#include "settings.h"

using namespace game_settings;
namespace game_Core {

	class Player : public Entity {

	public:

		Player(float x, float y, float w, float h, int type, settings* set);
		virtual ~Player() { };
		virtual int getInput() = 0;
		virtual projectile* Shoot() = 0;
		virtual void rumble(int ms) = 0;
		void move(float x, float y);

	private:
		techSetting* set;

	};
}

#endif // !PLAYER_H
