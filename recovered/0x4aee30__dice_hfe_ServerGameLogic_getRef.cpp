// FUNCTION: BF2 0x4aee30
namespace dice { namespace hfe {
class ServerGameLogic {
public:
    char _pad[0x48c];
    int field;
    int getRef() const;
};
int ServerGameLogic::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_getRef (0x4aee30)
