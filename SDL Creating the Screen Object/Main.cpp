#include "SDL.h"
#include <iostream>
#include "Screen.h"

using namespace std;
using namespace cww;

int main(int argc, char *argv[]) {

  Screen screen;

  if (screen.init() == false) {

    cout << "Error initialising SDL." << endl;
  }

  while (true) {
    // Update particles
    // Draw particles
    // Check for messages/events
    if (screen.processEvents()==false) {
      break;
    }
  }

  screen.close();

  return 0;
}