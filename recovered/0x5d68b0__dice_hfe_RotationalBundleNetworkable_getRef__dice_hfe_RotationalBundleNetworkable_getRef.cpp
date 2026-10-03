// FUNCTION: BF2 0x5d68b0
namespace dice { namespace hfe {

class RotationalBundleNetworkable {
public:
    unsigned int getRef();

private:
    char m_pad0[0x70];
    unsigned int m_ref;               // offset 0x70
};

unsigned int RotationalBundleNetworkable::getRef() {
    return m_ref;
}

} }
// REVERSED_FUNCTION: dice_hfe_RotationalBundleNetworkable_getRef (0x5d68b0)