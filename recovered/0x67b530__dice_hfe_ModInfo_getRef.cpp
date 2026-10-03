// FUNCTION: BF2 0x67b530
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x67b530(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ModInfo_getRef (0x67b530)
