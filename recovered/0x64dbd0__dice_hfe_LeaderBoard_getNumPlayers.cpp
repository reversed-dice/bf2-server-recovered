// FUNCTION: BF2 0x64dbd0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x4c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x64dbd0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_LeaderBoard_getNumPlayers (0x64dbd0)
