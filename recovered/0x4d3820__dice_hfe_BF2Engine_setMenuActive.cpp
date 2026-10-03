// FUNCTION: BF2 0x4d3820
namespace dice { namespace hfe {
class BF2Engine {
public:
    char _pad[0x98];
    bool field;
    void setMenuActive(bool v);
};
void BF2Engine::setMenuActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_BF2Engine_setMenuActive (0x4d3820)
