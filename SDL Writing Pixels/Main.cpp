#include "SDL.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  const int SCREEN_WIDTH = 800;
  const int SCREEN_HEIGHT = 600;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    return false;
  }

  SDL_Window *window = SDL_CreateWindow(
      "Particle fire explosion", SDL_WINDOWPOS_UNDEFINED,
      SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

  if (window == NULL) {
    SDL_Quit();
    cout << "Could not create window: " << SDL_GetError() << endl;
    return 2;
  }

  SDL_Renderer *renderer =
      SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
  SDL_Texture *texture =
      SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,
                        SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

  if (renderer == NULL) {
    cout << "Could not create renderer" << endl;
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 3;
  }

  if (texture == NULL) {
    cout << "Could not create texture" << endl;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 4;
  }

  Uint32 *buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

  memset(buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

  for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
    buffer[i] = 0xFFFFFFFF;
  }

  SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH * sizeof(Uint32));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);

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

  delete[] buffer;
  SDL_DestroyTexture(texture);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}