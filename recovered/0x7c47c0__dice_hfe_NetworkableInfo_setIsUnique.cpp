// FUNCTION: BF2 0x7c47c0
namespace dice { namespace hfe {
class NetworkableInfo {
public:
    char _pad[0x18];
    bool field;
    void setIsUnique(bool v);
};
void NetworkableInfo::setIsUnique(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_NetworkableInfo_setIsUnique (0x7c47c0)
