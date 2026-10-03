// FUNCTION: BF2 0x6dfac0
namespace dice { namespace hfe {
class StaticResponsePhysics {
public:
    char _pad[0x20];
    bool field;
    void setEnabled(bool v);
};
void StaticResponsePhysics::setEnabled(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_StaticResponsePhysics_setEnabled (0x6dfac0)
