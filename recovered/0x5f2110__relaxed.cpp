// FUNCTION: BF2 0x5f2110
namespace dice { namespace hfe { namespace world {

class AmmoComp {
public:
    float getAcceptDelay() const;
};

float AmmoComp::getAcceptDelay() const {
    return *(float*)(*(unsigned long*)((const char*)this + 0x90) + 0x1c)
         + *(float*)(*(unsigned long*)((const char*)this + 0x90) + 0x18);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoComp_getAcceptDelay_bool_const (0x5ea470)