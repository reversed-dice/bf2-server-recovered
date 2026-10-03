// FUNCTION: BF2 0x78f290
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_96(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectReal_addRef (96)

// re-trigger validate
