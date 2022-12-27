#pragma once
#include"SDL.h"
class Game {
public:
	Game();
	~Game();
	void init(const char* title,int xpos,int ypos,int width,int height,bool fullscreen);
	void handleevents();
	void update();
	void render();
	void clean();
	bool running() {
		return isrunning;
	}
private:
	int cnt=0;
	bool isrunning;
	SDL_Window* window;
	SDL_Renderer* renderer;
};
