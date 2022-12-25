#include<iostream>
#include<string>
#include<SDL2/SDL.h>

#define WIDTH 1024
#define HEIGHT 576
int main(int argc, char* argv[]) {

	SDL_Window* window = nullptr;
	window = SDL_CreateWindow("SDL2 - IO v1.0", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);

	bool running = true;
	while (running) {
		SDL_Event event;
		SDL_PollEvent(&event);
		if (event.type == SDL_QUIT) {
			running = false;
		}
	}

	return 0;
}