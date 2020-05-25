#pragma once
#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "Entity.h"

namespace game_Core {
	class projectile : public Entity {

	public:
		projectile(float x, float y, float h, int type, float destX, float destY);
		~projectile() { };
		void move(float x, float y);

	protected:
		float destY;
	};
}


#endif // !PROJECTILE_H
