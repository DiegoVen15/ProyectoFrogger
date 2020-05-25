#pragma once
#ifndef SDLFACTORY_H
#define SDLFACTORY_H

#include "SDL_video.h"
#include "SDL_events.h"
#include "SDL_render.h"
#include "SDLEnemy.h"
#include "SDLPlayer.h"
#include "AbstractFactory.h"
#include "Renderer.h"
#include "projectile.h"

using namespace game_Core;
namespace game_SDL {

	class SDLFactory : public AbstractFactory {

	public:
		SDLFactory(settings* s);
		~SDLFactory();
		Enemy* createEnemy(int lane);
		Player* createPlayer();
		Enemy* createHealthPack(int lane);
		Enemy* createAmmoPack(int lane);
		projectile* createProjectile(float startX, int startY, float destX, float destY);
		int init();
		void update();
		void endUpdate();
		void close();
		FPSReg* createFPSRegulator(int cap);
		void renderText(float x, float y, float w, float h, string text);
		void playFX(int fx);
		
	private:
		float calc_width(int scrnh, int w, int h);
		Renderer* r = NULL;
		settings* s;
		SDL_Texture* playerSprite = NULL;
		SDL_Texture* enemySprite = NULL;
		SDL_Texture* healthPackSprite = NULL;
		SDL_Texture* ammoPackSprite = NULL;
		SDL_Texture * projSprite = NULL;	
	};
}
#endif // !SDLFACTORY_H
