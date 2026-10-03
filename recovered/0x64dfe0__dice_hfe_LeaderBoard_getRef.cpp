// FUNCTION: BF2 0x64dfe0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x64dfe0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_LeaderBoard_getRef (0x64dfe0)
