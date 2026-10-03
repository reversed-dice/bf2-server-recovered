// FUNCTION: BF2 0x5e9380
namespace dice { namespace hfe {
class GenericFireArm {
public:
    char _pad[0x308];
    int field;
    void setNetworkSafeItemIndex(int v);
};
void GenericFireArm::setNetworkSafeItemIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericFireArm_setNetworkSafeItemIndex (0x5e9380)
