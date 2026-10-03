// FUNCTION: BF2 0x5a03d0
namespace dice { namespace hfe { namespace world {

class NonScreenAlignedParticleSystemTemplate {
public:
    int getRef();
};

int NonScreenAlignedParticleSystemTemplate::getRef() {
    return *(int*)((char*)this + 0x90);
}

} } }
