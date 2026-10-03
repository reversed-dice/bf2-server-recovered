// FUNCTION: BF2 0x76d530
namespace dice { namespace hfe { namespace world {

class LinearTransform;

class BundleTemplate {
    unsigned char __pad_00[0x10];     // 0x00
    void** m_entries;                  // 0x10
public:
    LinearTransform* getTransformation(int index) const;
};

LinearTransform* BundleTemplate::getTransformation(int index) const {
    return (LinearTransform*)((unsigned char*)m_entries[index] + 0xc);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_BundleTemplate_getTransformation_int_const (0x508d70)