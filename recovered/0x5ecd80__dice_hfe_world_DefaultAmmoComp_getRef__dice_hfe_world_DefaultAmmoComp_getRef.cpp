// FUNCTION: BF2 0x5ecd80
namespace dice { namespace hfe { namespace world {

class DefaultAmmoComp {
public:
    unsigned int getRef() const;
};

unsigned int DefaultAmmoComp::getRef() const {
    return *(unsigned int*)((const char*)this + 0x88);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAmmoComp_getRef (0x5ecd80)