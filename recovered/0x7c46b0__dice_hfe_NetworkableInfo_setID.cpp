// FUNCTION: BF2 0x7c46b0
namespace dice { namespace hfe {
class NetworkableInfo {
public:
    char _pad[0x24];
    int field;
    void setID(int v);
};
void NetworkableInfo::setID(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_NetworkableInfo_setID (0x7c46b0)
