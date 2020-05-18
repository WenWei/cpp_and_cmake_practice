#include "Swarm.h"
#include "Particle.h"

cww::Swarm::Swarm(): lastTime(0) { 
	m_pParticles = new Particle[NPARTICLES];
}

cww::Swarm::~Swarm() { delete[] m_pParticles; }

void cww::Swarm::update(int elapsed) {
  int interval = elapsed - lastTime;

  for (int i = 0; i < NPARTICLES; i++) {
    m_pParticles[i].update(interval);
  }

  lastTime = elapsed;
}
