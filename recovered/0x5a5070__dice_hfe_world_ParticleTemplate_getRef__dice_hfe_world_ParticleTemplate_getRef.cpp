// FUNCTION: BF2 0x5a5070
namespace dice { namespace hfe { namespace world {

class ParticleTemplate {
public:
    int getRef();
};

int ParticleTemplate::getRef() {
    return *(int*)((char*)this + 0x70);
}

} } }
