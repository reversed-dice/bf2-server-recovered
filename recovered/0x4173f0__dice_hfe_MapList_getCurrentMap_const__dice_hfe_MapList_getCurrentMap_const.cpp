// FUNCTION: BF2 0x4173f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4173f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_MapList_getCurrentMap_const__dice_hfe_MapList_getCurrentMap_const (0x4173f0)
