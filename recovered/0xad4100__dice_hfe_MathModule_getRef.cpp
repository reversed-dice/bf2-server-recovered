// FUNCTION: BF2 0xad4100
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0xad4100(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_MathModule_getRef (0xad4100)
