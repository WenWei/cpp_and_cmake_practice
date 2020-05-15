#include <iostream>
#include "SDL.h" 

using namespace std;

int main(int argc, char* argv[])
{
	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		return false;
	}

	SDL_Window* window = SDL_CreateWindow("Particle fire explosion",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH, SCREEN_HEIGHT,
		SDL_WINDOW_SHOWN);

	if (window == NULL) {
		SDL_Quit();
		cout << "Could not create window: " << SDL_GetError() << endl;
		return 2;
	}

	bool quit = false;
	while (!quit) {
		// Update particles
		// Draw particles
		// Check for messages/events
		
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}