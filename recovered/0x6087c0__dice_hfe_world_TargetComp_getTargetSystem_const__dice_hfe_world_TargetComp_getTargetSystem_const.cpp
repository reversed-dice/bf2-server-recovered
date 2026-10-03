// FUNCTION: BF2 0x6087c0
namespace dice { namespace hfe { namespace world {

class TargetComp {
public:
    unsigned int getTargetSystem() const;
};

unsigned int TargetComp::getTargetSystem() const {
    return *(unsigned int*)(*(long long*)((char*)this + 0x78) + 0x54);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_getTargetSystem_const (0x6087c0)