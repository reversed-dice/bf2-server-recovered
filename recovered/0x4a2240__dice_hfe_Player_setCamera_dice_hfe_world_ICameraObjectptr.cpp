// FUNCTION: BF2 0x4a2240
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x98];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x4a2240(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_setCamera_dice_hfe_world_ICameraObjectptr (0x4a2240)
