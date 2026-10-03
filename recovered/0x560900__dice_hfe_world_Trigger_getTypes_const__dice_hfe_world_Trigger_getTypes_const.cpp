// FUNCTION: BF2 0x560900
namespace dice { namespace hfe { namespace world {

class Trigger {
public:
    unsigned int getTypes() const;
};

unsigned int Trigger::getTypes() const {
    return *(unsigned int *)(*(unsigned long long *)((unsigned char *)this + 0x240) + 0x1f8);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Trigger_getTypes_const (0x560900)