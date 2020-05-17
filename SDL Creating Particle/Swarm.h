#pragma once
#include "Particle.h"

namespace cww {
class Swarm {
public:
  const static int NPARTICLES = 5000;

private:
  Particle * m_pParticles;

public:
  Swarm();
  virtual ~Swarm();

  const Particle * const getParticle() { return m_pParticles; }
};
} // namespace cww