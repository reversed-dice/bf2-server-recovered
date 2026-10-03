// FUNCTION: BF2 0x521bc0
namespace dice { namespace hfe { namespace world {
class GrapplingHookRopeContainer {
public:
    unsigned int release();
    virtual void vf00();
    virtual void vf01();
    virtual void vf02();
    virtual void vf03();
    virtual void vf04();
    virtual ~GrapplingHookRopeContainer() {}
    char _pad[0x5F4];
    int m_unk_0x5FC;
};
unsigned int GrapplingHookRopeContainer::release() {
    unsigned int ref = m_unk_0x5FC - 1;
    m_unk_0x5FC = ref;
    if (ref == 0) {
        if (this != 0) {
            delete this;
        }
    }
    return ref;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GrapplingHookRopeContainer::release (0x521bc0)