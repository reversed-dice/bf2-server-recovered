// FUNCTION: BF2 0x78d8f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x78d8f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPrimaryReal_getRef (0x78d8f0)
