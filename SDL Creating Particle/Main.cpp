#include "SDL.h"
#include "Screen.h"
#include "Swarm.h"
#include "math.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
using namespace cww;

int main(int argc, char *argv[]) {

  srand(time(NULL));

  Screen screen;

  if (screen.init() == false) {

    cout << "Error initialising SDL." << endl;
  }

  Swarm swarm;

  while (true) {
    // Update particles
    // Draw particles
    int elapsed = SDL_GetTicks();

    unsigned char red = (unsigned char)((1 + cos(elapsed * 0.0001)) * 128);
    unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
    unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

    const Particle *const pParticles = swarm.getParticle();

    for (int i = 0; i < Swarm::NPARTICLES; i++) {
      Particle particle = pParticles[i];

      int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
      int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2;

      screen.setPixel(x, y, red, green, blue);
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