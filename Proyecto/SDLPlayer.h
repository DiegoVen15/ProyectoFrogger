#pragma once
#ifndef SDLPLAYER_H
#define SDLPLAYER_H

#include <SDL_events.h>
#include <SDL_render.h>
#include "Player.h"
#include "Renderer.h"
#include "SDLFactory.h"
#include "SDLProjectile.h"
using namespace game_Core;
namespace game_SDL {
	class SDLFactory;

	class SDLPlayer : public Player {
	public:

		SDLPlayer(float x, float y, float h, float w, int type, SDL_Texture* t, Renderer* r, SDLFactory* f, settings* set);
		~SDLPlayer();
		void Draw();
		projectile* Shoot();
		void rumble(int ms);
		int getInput();

	private:
		SDL_Event e;
		SDL_Texture* texture;
		Renderer* r;
		SDLFactory* f;
		SDL_GameController* gameController = NULL;
		SDL_Haptic* haptic;
	};
}
#endif // !SDLPLAYER_H
