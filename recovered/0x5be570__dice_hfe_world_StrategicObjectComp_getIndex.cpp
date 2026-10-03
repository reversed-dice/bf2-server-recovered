// FUNCTION: BF2 0x5be570
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5be570(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectComp_getIndex (0x5be570)
