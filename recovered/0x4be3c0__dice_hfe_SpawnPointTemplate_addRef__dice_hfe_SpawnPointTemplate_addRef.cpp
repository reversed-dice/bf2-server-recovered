// FUNCTION: BF2 0x4be3c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_112(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_addRef (112)
