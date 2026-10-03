// FUNCTION: BF2 0x5e9700
namespace dice { namespace hfe {
class GenericFireArmTemplate {
public:
    char _pad[0x24c];
    int field;
    void setItemType(int v);
};
void GenericFireArmTemplate::setItemType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericFireArmTemplate_setItemType (0x5e9700)
