#pragma once
#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>
#include <fstream>
#include "settingStruct.h"

using namespace std;
namespace game_settings {

	class settings {

	public:

		settings();
		void save();
		techSetting* getSettings();
		userData* getUserData();

	private:
		void read();
		void createNewINI();
		techSetting* ts;
		userData* ud;
		ofstream setFile;
		ifstream getFile;
	};
}
#endif // !SETTINGS_H
