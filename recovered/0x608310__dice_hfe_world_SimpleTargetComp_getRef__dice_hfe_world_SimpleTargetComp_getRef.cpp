// FUNCTION: BF2 0x608310
namespace dice { namespace hfe { namespace world {

class SimpleTargetComp {
public:
    unsigned int getRef() const;
};

unsigned int SimpleTargetComp::getRef() const {
    return *(unsigned int*)((char*)this + 0x80);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleTargetComp_getRef (0x608310)