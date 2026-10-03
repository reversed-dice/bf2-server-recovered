// FUNCTION: BF2 0x4bd480
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x4422f0(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_GhostManager_setPlayer_dice_hfe_world_IPlayerptr (0x4422f0)
