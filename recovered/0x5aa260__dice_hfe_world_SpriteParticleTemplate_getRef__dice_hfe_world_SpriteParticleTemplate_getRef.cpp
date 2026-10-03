// FUNCTION: BF2 0x5aa260
namespace dice { namespace hfe { namespace world {

class SpriteParticleTemplate {
public:
    int getRef();
};

int SpriteParticleTemplate::getRef() {
    return *(int*)((char*)this + 0x68);
}

} } }
