// FUNCTION: BF2 0x50a030
namespace dice { namespace hfe { namespace world {

class AnimatedBundle {
public:
    void setActiveAnimationSystem(unsigned int);
};

void AnimatedBundle::setActiveAnimationSystem(unsigned int value) {
    *(unsigned int*)((char*)this + 0x258) = value;
}

} } }
