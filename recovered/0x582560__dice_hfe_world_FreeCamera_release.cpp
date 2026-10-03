// FUNCTION: BF2 0x582560
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot30();
    unsigned char _pad[0x250 - 0x8];
    unsigned int m_ref;
    unsigned int release();
};

unsigned int FreeCamera::release() {
    unsigned int r = --m_ref;
    if (r == 0) {
        if (this != 0) {
            slot30();
        }
    }
    return r;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FreeCamera_release (0x582560)
