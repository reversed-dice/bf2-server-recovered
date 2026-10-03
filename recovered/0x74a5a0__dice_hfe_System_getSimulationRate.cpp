// FUNCTION: BF2 0x74a5a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x74a5a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_System_getSimulationRate (0x74a5a0)
