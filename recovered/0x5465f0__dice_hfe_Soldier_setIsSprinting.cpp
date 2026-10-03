// FUNCTION: BF2 0x5465f0
namespace dice { namespace hfe {
class Soldier {
public:
    char _pad[0x516];
    bool field;
    void setIsSprinting(bool v);
};
void Soldier::setIsSprinting(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Soldier_setIsSprinting (0x5465f0)
