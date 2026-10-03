// FUNCTION: BF2 0x7c47e0
namespace dice { namespace hfe {
class NetworkableInfo {
public:
    char _pad[0x20];
    bool field;
    void setForceNetworkableId(bool v);
};
void NetworkableInfo::setForceNetworkableId(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_NetworkableInfo_setForceNetworkableId (0x7c47e0)
