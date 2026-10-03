// FUNCTION: BF2 0x617f90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x617f90(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ProjectileComp_init_dice_hfe_world_IObjectptr (0x617f90)
