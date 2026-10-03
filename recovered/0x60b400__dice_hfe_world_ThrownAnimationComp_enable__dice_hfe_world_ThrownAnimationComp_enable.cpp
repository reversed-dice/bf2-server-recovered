// FUNCTION: BF2 0x60b400
namespace dice { namespace hfe { namespace world {

class ThrownAnimationComp {
public:
    void enable();

private:
    /* 0x00 */ void* vtable;
    /* 0x08 */ char pad_0x08[0x30];
    /* 0x38 */ int m_refCount;
    /* 0x3c */ unsigned char m_enabled;
};

void ThrownAnimationComp::enable() { m_enabled = 0; }

} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownAnimationComp_enable (0x60b400)