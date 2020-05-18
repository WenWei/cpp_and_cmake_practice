#pragma once
#include "Particle.h"

namespace cww {
class Swarm {
public:
  const static int NPARTICLES = 3000;

private:
  Particle * m_pParticles;
  int lastTime;

public:
  Swarm();
  virtual ~Swarm();
  void update(int elapsed);

  const Particle * const getParticle() { return m_pParticles; }
};
} // namespace cww