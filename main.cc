#include <iostream>
#include <stdexcept>
#include <SDL2/SDL.h>

#include "GLDemoWindow.h"

int main(int, char **)
{
	SDL_Init(SDL_INIT_EVERYTHING); // Р�РЅРёС†РёР°Р»РёР·РёСЂСѓРµРј SDL, РєСѓРґР° Р¶Рµ РјС‹ Р±РµР· РЅРµРіРѕ~~

	try {
		GLDemoWindow w;

		w.main_loop();

	} catch (const std::exception &e) {
		std::cerr << "РџСЂРё РІС‹РїРѕР»РЅРµРЅРёРё РїСЂРѕРіСЂР°РјРјС‹ РїСЂРѕРёР·РѕС€Р»Р° РѕС€РёР±РєР°:"
				<< std::endl
				<< e.what()
				<< std::endl;
		return 1;
	} catch (...) {
		std::cerr << "РџСЂРё РІС‹РїРѕР»РЅРµРЅРёРё РїСЂРѕРіСЂР°РјРјС‹ РїСЂРѕРёР·РѕС€Р»Р° РЅРµРёР·РІРµСЃС‚РЅР°СЏ РѕС€РёР±РєР°!"
				<< std::endl;
		return 1;
	}

	return 0;
}








