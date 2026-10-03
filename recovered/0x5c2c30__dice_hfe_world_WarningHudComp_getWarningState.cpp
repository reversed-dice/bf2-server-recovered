// FUNCTION: BF2 0x5c2c30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5c2c30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WarningHudComp_getWarningState (0x5c2c30)
