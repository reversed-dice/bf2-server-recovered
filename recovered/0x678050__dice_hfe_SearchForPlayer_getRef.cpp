// FUNCTION: BF2 0x678050
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x678050(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_SearchForPlayer_getRef (0x678050)
