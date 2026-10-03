// FUNCTION: BF2 0x6760b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x64];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6760b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_PlayerUnlockInfo_getRanked (0x6760b0)
