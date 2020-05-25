#pragma once
#ifndef SETTINGSTRUCT_H
#define SETTINGSTRUCT_H

#endif // 

#include <string>
using namespace std;

namespace game_settings {

	struct techSetting {

		int screenHeight;
		int screenWidth;
		int gridSize;

		string spriteBG;

		string spriteFrog;
		int spriteFrogW;
		int spriteFrogH;

		string spriteCar1;
		int spriteCarW;
		int spriteCarH;

		string spriteHealth;
		int spriteHealthW;
		int spriteHealthH;

		string spriteAmmo;
		int spriteAmmoW;
		int spriteAmmoH;

		string spriteBullet;
		int spriteBulletW;
		int spriteBulletH;

		string TTFRoboto;
		int textSize;

		string mainBGM;
	};

	struct userData {
		int highScore;
		int highScore_level;
	};
}
