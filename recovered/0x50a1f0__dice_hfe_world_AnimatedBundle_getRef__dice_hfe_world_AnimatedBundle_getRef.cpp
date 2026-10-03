// FUNCTION: BF2 0x50a1f0
namespace dice { namespace hfe { namespace world {

class AnimatedBundle {
public:
    int getRef();
};

int AnimatedBundle::getRef() {
    return *(int*)((char*)this + 0x240);
}

} } }
