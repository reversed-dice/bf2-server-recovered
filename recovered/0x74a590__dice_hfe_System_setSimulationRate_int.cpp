// FUNCTION: BF2 0x74a590
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x74a590(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_System_setSimulationRate_int (0x74a590)
