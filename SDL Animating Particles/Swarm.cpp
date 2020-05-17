#include "Swarm.h"
#include "Particle.h"

cww::Swarm::Swarm() { 
	m_pParticles = new Particle[NPARTICLES];
}

cww::Swarm::~Swarm() { delete[] m_pParticles; }

void cww::Swarm::update() {
  for (int i = 0; i < NPARTICLES; i++) {
    m_pParticles[i].update();
  }
}
