// FUNCTION: BF2 0x4bfd70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_96(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ClientSquadManager_addRef (96)
