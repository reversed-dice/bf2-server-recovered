// FUNCTION: BF2 0x5e96c0
namespace dice { namespace hfe {
class GenericFireArmTemplate {
public:
    char _pad[0x248];
    int field;
    void setItemIndex(int v);
};
void GenericFireArmTemplate::setItemIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericFireArmTemplate_setItemIndex (0x5e96c0)
