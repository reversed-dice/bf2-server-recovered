// FUNCTION: BF2 0x5ea470
namespace dice { namespace hfe { namespace world {

class AmmoComp {
public:
    float getAcceptDelay() const;
};

float AmmoComp::getAcceptDelay() const {
    return *(float*)(*(unsigned long*)((const char*)this + 0x80) + 0x14)
         + *(float*)(*(unsigned long*)((const char*)this + 0x80) + 0x34);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoComp_getAcceptDelay_bool_const (0x5ea470)