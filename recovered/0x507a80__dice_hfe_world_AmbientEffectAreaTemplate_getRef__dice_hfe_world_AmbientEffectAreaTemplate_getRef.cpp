// FUNCTION: BF2 0x507a80
namespace dice { namespace hfe { namespace world {

class AmbientEffectAreaTemplate {
public:
    int getRef();
};

int AmbientEffectAreaTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
