// FUNCTION: BF2 0x7c47a0
namespace dice { namespace hfe {
class NetworkableInfo {
public:
    char _pad[0x16];
    bool field;
    void setHasPitch(bool v);
};
void NetworkableInfo::setHasPitch(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_NetworkableInfo_setHasPitch (0x7c47a0)
