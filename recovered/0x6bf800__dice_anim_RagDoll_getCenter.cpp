// FUNCTION: BF2 0x6bf800
// TARGET: 0x6bf800
// FUNCTION: dice::anim::RagDoll::getCenter()
extern "C" void abort() __attribute__((noreturn));

namespace dice {
namespace anim {

class RagDollTemplate {
public:
    int findParticleIndex(int idx);
};

struct Particle {
    char data[0x58];
};

class RagDoll {
public:
    void* vptr;
    Particle* m_particles;
    char _pad[0x10];
    RagDollTemplate* m_template;

    Particle* pad1();
    Particle* pad2();
    Particle* pad3();
    Particle* pad4();
    Particle* pad5();
    Particle* pad6();
    Particle* getCenter();
};

Particle* RagDoll::pad1() {
    int idx = m_template->findParticleIndex(6);
    if (idx != -1) return &m_particles[idx];
    abort();
}

Particle* RagDoll::pad2() {
    int idx = m_template->findParticleIndex(6);
    if (idx != -1) return &m_particles[idx];
    abort();
}

Particle* RagDoll::pad3() {
    int idx = m_template->findParticleIndex(6);
    if (idx != -1) return &m_particles[idx];
    abort();
}

Particle* RagDoll::pad4() {
    int idx = m_template->findParticleIndex(6);
    if (idx != -1) return &m_particles[idx];
    abort();
}

Particle* RagDoll::pad5() {
    int idx = m_template->findParticleIndex(6);
    if (idx != -1) return &m_particles[idx];
    abort();
}

Particle* RagDoll::pad6() {
    int idx = m_template->findParticleIndex(6);
    if (idx != -1) return &m_particles[idx];
    abort();
}

Particle* RagDoll::getCenter() {
    int idx = m_template->findParticleIndex(6);
    if (idx != -1) {
        return &m_particles[idx];
    }
    abort();
}

}
}
