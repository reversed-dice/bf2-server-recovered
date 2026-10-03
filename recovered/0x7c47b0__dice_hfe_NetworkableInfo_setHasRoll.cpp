// FUNCTION: BF2 0x7c47b0
namespace dice { namespace hfe {
class NetworkableInfo {
public:
    char _pad[0x17];
    bool field;
    void setHasRoll(bool v);
};
void NetworkableInfo::setHasRoll(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_NetworkableInfo_setHasRoll (0x7c47b0)
