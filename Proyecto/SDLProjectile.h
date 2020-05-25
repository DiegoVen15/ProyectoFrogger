#pragma once
#ifndef SDLPROJECTILE_H
#define SDLPROJECTILE_H

#include <SDL_render.h>
#include "Renderer.h"
#include "projectile.h"

using namespace game_Core;
namespace game_SDL {

	class SDLProjectile : public projectile {

	public:
		SDLProjectile(float x, float y, float w, float h, int type, float destX, float destY, SDL_Texture* t, Renderer* r);
		~SDLProjectile();
		void Draw();

	private:
		SDL_Texture* texture;
		Renderer* r;
	};
}
#endif // !SDLPROJECTILE_H
