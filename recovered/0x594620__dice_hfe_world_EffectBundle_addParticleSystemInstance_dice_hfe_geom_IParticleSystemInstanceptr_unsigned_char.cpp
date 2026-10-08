// FUNCTION: BF2 0x594620
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace geom {
class IParticleSystemInstance;
} } }

namespace dice { namespace hfe { namespace world {

class EffectBundle {
public:
    char pad_0x0[0x268];
    std::vector<dice::hfe::geom::IParticleSystemInstance*> m_particles;
    std::vector<unsigned char> m_flags;

    void addParticleSystemInstance(dice::hfe::geom::IParticleSystemInstance* p, unsigned char b);
};

void EffectBundle::addParticleSystemInstance(dice::hfe::geom::IParticleSystemInstance* p, unsigned char b) {
    m_particles.push_back(p);
    m_flags.push_back(b);
}

} } }
