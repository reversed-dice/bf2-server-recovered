// FUNCTION: BF2 0x5e9340
namespace dice { namespace hfe {
class GenericFireArm {
public:
    char _pad[0x304];
    int field;
    void setItemType(int v);
};
void GenericFireArm::setItemType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericFireArm_setItemType (0x5e9340)
