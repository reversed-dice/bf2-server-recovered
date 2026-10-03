// FUNCTION: BF2 0x4b4f30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb5];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4b4f30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_getVictoryType (0x4b4f30)
