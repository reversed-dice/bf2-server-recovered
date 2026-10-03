// FUNCTION: BF2 0x5725f0
namespace dice { namespace hfe { namespace world {
class ZiplineContainer {
public:
    virtual ~ZiplineContainer() {}
    int release();
private:
    unsigned char __pad_0[0x5F4];
    int m_unk_0x5FC;
};
int ZiplineContainer::release() {
    int ref = m_unk_0x5FC - 1;
    m_unk_0x5FC = ref;
    if (ref == 0) {
        if (this != 0) {
            ((void(*)(ZiplineContainer*))((*reinterpret_cast<void***>(this))[6]))(this);
        }
    }
    return ref;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ZiplineContainer::release (0x5725f0)