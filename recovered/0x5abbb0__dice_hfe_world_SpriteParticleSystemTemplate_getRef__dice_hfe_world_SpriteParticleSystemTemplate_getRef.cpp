// FUNCTION: BF2 0x5abbb0
namespace dice { namespace hfe { namespace world {

class SpriteParticleSystemTemplate {
public:
    int getRef();
};

int SpriteParticleSystemTemplate::getRef() {
    return *(int*)((char*)this + 0x90);
}

} } }
