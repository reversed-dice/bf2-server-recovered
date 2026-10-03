// FUNCTION: BF2 0x743430
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x743430(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Profiler_getRef (0x743430)
