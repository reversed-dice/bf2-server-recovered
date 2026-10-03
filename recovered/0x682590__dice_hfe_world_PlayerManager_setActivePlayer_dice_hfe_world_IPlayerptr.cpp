// FUNCTION: BF2 0x682590
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x682590(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerManager_setActivePlayer_dice_hfe_world_IPlayerptr (0x682590)
