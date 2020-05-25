#pragma once
#ifndef RENDERER_H
#define RENDERER_H

#include "SDL.h"
#include "SDL_render.h"
#include <string>
#include "SDL_mixer.h"
#include "SDL_ttf.h"
#include "settings.h"
#include "SDL_video.h"

using namespace std;
using namespace game_settings;
namespace game_SDL {

	class Renderer {
	public:

		Renderer(settings* s);
		void render(float x, float y, float w, float h, SDL_Texture* t, bool fliph);
		void createWindow();
		void loadBG();
		void update();
		void endUpdate();
		void close();
		int loadMedia();
		void translatePercent(float* x, float* y);
		void translateGrid(float* x, float* y);
		SDL_Texture* createTexture(SDL_Surface* s);
		void renderText(float x, float y, float w, float h, string text, SDL_Color textColor);
		void renderParticle(float x, float y, float w, float h, SDL_Texture* t);
		void playFX(int fx);

	private:
		SDL_Window* mainWindow = NULL;
		SDL_Surface* scrnSurface = NULL;
		SDL_Surface* backGround = NULL;
		SDL_Surface* optiBg = NULL;
		SDL_Renderer* renderer = NULL;
		SDL_Texture* bgTexture = NULL;
		TTF_Font* font = NULL;
		Mix_Music* bgm = NULL;
		Mix_Chunk* jump = NULL;
		Mix_Chunk* health = NULL;
		Mix_Chunk* levelup = NULL;
		SDL_Texture* textTexture = NULL;
		SDL_Rect* textBox = NULL;
		techSetting* set;
	};
}
#endif // !RENDERER_H
