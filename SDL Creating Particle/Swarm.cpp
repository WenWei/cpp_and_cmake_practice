#include "Swarm.h"
#include "Particle.h"

cww::Swarm::Swarm() { 
	m_pParticles = new Particle[NPARTICLES];
}

cww::Swarm::~Swarm() { delete[] m_pParticles; }
