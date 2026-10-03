// FUNCTION: BF2 0x473460
namespace dice { namespace hfe {
class ClientGameLogic {
public:
    char _pad[0x48c];
    int field;
    int getRef() const;
};
int ClientGameLogic::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_getRef (0x473460)
