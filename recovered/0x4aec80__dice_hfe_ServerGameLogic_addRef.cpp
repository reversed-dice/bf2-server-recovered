// FUNCTION: BF2 0x4aec80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48c];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_1164(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_addRef (1164)
