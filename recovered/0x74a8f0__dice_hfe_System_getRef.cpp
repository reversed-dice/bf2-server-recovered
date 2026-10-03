// FUNCTION: BF2 0x74a8f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x74a8f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_System_getRef (0x74a8f0)
