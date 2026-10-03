// FUNCTION: BF2 0x5c7760
namespace dice { namespace hfe {
class INetworkableObject {
public:
    char _pad[0x8];
    int field;
    void setOwnerID(int v);
};
void INetworkableObject::setOwnerID(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_INetworkableObject_setOwnerID (0x5c7760)
