#pragma once
#ifndef FPSREG_H
#define FPSREG_H

namespace game_Core {

	class FPSReg {
		
	public:

		FPSReg(int cap);
		virtual void cap() = 0;
		virtual void  startCap() = 0;

	protected:
		int ticksPerFrame, startTicks;
	};
}
#endif // !FPSREG_H
