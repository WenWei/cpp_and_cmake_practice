#include "SDL.h"
#include "Screen.h"
#include "math.h"
#include <iostream>

using namespace std;
using namespace cww;

int main(int argc, char *argv[]) {

  Screen screen;

  if (screen.init() == false) {

    cout << "Error initialising SDL." << endl;
  }

  int max = 0;

  while (true) {
    // Update particles
    // Draw particles
    int elapsed = SDL_GetTicks();
    unsigned char red = (unsigned char)((1 + cos(elapsed * 0.0001)) * 128);
    unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
    unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

    if (green > max)
      max = green;

    cout << green << endl;

    for (int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
      for (int x = 0; x < Screen::SCREEN_WIDTH; x++) {
        screen.setPixel(x, y, red, green, blue);
      }
    }

    // Draw the screen
    screen.update();

    // Check for messages/events
    if (screen.processEvents() == false) {
      break;
    }
  }
  screen.close();

  return 0;
}