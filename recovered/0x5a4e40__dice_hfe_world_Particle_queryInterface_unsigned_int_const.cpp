// FUNCTION: BF2 0x5a4e40
namespace dice { namespace hfe {
extern unsigned int IID_IBase;
namespace world {
extern unsigned int IID_IParticle;

class Particle {
public:
    virtual void* queryInterface(unsigned int id) const;
};

void* Particle::queryInterface(unsigned int id) const {
    if (IID_IBase == id) {
        return const_cast<Particle*>(this);
    }
    void* res = 0;
    if (id == IID_IParticle) {
        res = (char*)this + 0x218;
    }
    return res;
}

} } }
