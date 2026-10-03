// FUNCTION: BF2 0x78fe50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x68];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x78fe50(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectSecondaryShared_getRef (0x78fe50)
