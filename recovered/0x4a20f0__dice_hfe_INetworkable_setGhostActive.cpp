// FUNCTION: BF2 0x4a20f0
namespace dice { namespace hfe {
class INetworkable {
public:
    char _pad[0x18];
    bool field;
    void setGhostActive(bool v);
};
void INetworkable::setGhostActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_INetworkable_setGhostActive (0x4a20f0)
