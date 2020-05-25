#pragma once
#ifndef SDLFPSREG_H
#define SDLFPSREG_H

#include "FPSReg.h"
using namespace game_Core;
namespace game_SDL {

	class SDLFPSReg : public FPSReg {

	public:
		SDLFPSReg(int cap);
		void cap();
		void startCap();
	};
}

#endif //SDLFPSREG_H