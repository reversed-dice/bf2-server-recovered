// FUNCTION: BF2 0x507a40
namespace dice { namespace hfe { namespace world {

class AmbientEffectArea {
public:
    int getRef();
};

int AmbientEffectArea::getRef() {
    return *(int*)((char*)this + 0x238);
}

} } }
