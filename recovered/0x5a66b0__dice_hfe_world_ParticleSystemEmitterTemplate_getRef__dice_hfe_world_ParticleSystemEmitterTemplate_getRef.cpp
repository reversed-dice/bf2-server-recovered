// FUNCTION: BF2 0x5a66b0
namespace dice { namespace hfe { namespace world {

class ParticleSystemEmitterTemplate {
public:
    int getRef();
};

int ParticleSystemEmitterTemplate::getRef() {
    return *(int*)((char*)this + 0x8c);
}

} } }
