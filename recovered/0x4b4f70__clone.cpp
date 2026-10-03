// FUNCTION: BF2 0x4b4f70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x40cd50(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo_getDelay__dice_hfe_EndOfRoundInfo_getDelay (0x40cd50)
