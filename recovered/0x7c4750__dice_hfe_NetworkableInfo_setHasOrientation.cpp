// FUNCTION: BF2 0x7c4750
namespace dice { namespace hfe {
class NetworkableInfo {
public:
    char _pad[0x14];
    bool field;
    void setHasOrientation(bool v);
};
void NetworkableInfo::setHasOrientation(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_NetworkableInfo_setHasOrientation (0x7c4750)
