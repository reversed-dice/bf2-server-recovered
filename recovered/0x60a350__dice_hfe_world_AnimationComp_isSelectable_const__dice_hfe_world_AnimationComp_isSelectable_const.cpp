// FUNCTION: BF2 0x60a350
namespace dice { namespace hfe { namespace world {

class AnimationComp {
public:
    unsigned int isSelectable() const;
};

unsigned int AnimationComp::isSelectable() const {
    return 1;
}

} } }
