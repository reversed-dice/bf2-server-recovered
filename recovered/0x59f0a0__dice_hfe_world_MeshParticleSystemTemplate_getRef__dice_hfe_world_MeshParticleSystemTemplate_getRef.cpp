// FUNCTION: BF2 0x59f0a0
namespace dice { namespace hfe { namespace world {

class MeshParticleSystemTemplate {
public:
    int getRef();
};

int MeshParticleSystemTemplate::getRef() {
    return *(int*)((char*)this + 0x90);
}

} } }
