// FUNCTION: BF2 0x573f30
namespace dice { namespace hfe { namespace world {

class BundleTransformation;

class Bundle {
public:
    BundleTransformation* getBundleTransformation() const;
};

BundleTransformation* Bundle::getBundleTransformation() const {
    return *(BundleTransformation* const*)((const char*)this + 0x230);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Bundle_getBundleTransformation_const (0x573f30)