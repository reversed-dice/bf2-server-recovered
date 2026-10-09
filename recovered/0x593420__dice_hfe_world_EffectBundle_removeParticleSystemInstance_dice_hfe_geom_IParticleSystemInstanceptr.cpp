// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x593420
#include <vector>

namespace dice { namespace hfe {

namespace geom {
class IParticleSystemInstance;
}

namespace world {

class EffectBundle {
public:
    char _pad[0x268];
    std::vector<geom::IParticleSystemInstance*> m_instances; // +0x268 .. +0x280
    std::vector<unsigned char> m_byteVec; // +0x280

    void removeParticleSystemInstance(geom::IParticleSystemInstance* instance);
};

void EffectBundle::removeParticleSystemInstance(geom::IParticleSystemInstance* instance)
{
    std::vector<unsigned char>& bVec = m_byteVec;
    std::vector<geom::IParticleSystemInstance*>& insts = m_instances;
    std::vector<geom::IParticleSystemInstance*>::iterator it = insts.begin();
    std::vector<unsigned char>::iterator bit = bVec.begin();
    while (it != insts.end()) {
        if (*it == instance) {
            insts.erase(it);
            bVec.erase(bit);
            return;
        }
        ++it;
        ++bit;
    }
}

} } }
