// FUNCTION: BF2 0x78f2f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x78f2f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectReal_getRef (0x78f2f0)
