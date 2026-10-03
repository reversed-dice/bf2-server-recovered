// FUNCTION: BF2 0x525070
namespace dice { namespace hfe { namespace world {

class Kit {
public:
    float getAbilityUpdate() const;

private:
    /* 0x00 */ void* _vtable;
    /* 0x08 */ char _pad0[0x20];
    /* 0x28 */ void* m_abilityData;
};

float Kit::getAbilityUpdate() const {
    return *(float*)((char*)m_abilityData + 0x264);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Kit_getAbilityUpdate_const (0x525070)