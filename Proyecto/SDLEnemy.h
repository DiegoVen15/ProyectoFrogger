#pragma once
#ifndef SDLENEMY_H
#define SDLENEMY_H

#include "SDL_render.h"
#include "Enemy.h"
#include "Renderer.h"

using namespace game_Core;
namespace game_SDL {
	class SDLEnemy : public Enemy{
	
	public:
		SDLEnemy(float x, float y, float w, float h, int type, SDL_Texture* t, Renderer* r, bool fliph);
		~SDLEnemy();
		void Draw();

	private:
		SDL_Texture* texture;
		Renderer* r;
	};
 }
#endif // !ENEMY_H
