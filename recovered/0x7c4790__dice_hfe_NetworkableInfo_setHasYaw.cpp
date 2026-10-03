// FUNCTION: BF2 0x7c4790
namespace dice { namespace hfe {
class NetworkableInfo {
public:
    char _pad[0x15];
    bool field;
    void setHasYaw(bool v);
};
void NetworkableInfo::setHasYaw(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_NetworkableInfo_setHasYaw (0x7c4790)
