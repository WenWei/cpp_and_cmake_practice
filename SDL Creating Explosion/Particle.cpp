#define _USE_MATH_DEFINES

#include "Particle.h"
#include <math.h>
#include <stdlib.h>

cww::Particle::Particle() : m_x(0), m_y(0) {
  m_direction = (2 * M_PI * rand()) / RAND_MAX;
  m_speed = (0.001 * rand()) / RAND_MAX;
}

cww::Particle::~Particle() {}

void cww::Particle::update() { double xspeed = m_speed * cos(m_direction);
  double yspeed = m_speed * sin(m_direction);

  m_x += xspeed;
  m_y += yspeed;
 
}
