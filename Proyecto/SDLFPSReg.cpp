#include "SDL_timer.h"
#include <cstdio>
#include "SDLFPSReg.h"

namespace game_SDL {

	SDLFPSReg::SDLFPSReg(int cap) : FPSReg(cap) {
		ticksPerFrame = 1000 / cap;
	}

	void SDLFPSReg::cap() {
		int frameticks = SDL_GetTicks() - startTicks;
		if ((frameticks) < ticksPerFrame) {
			SDL_Delay((uint32_t)(ticksPerFrame - frameticks));
		}
	}

	void SDLFPSReg::startCap() {
		startTicks = SDL_GetTicks();
	}
}