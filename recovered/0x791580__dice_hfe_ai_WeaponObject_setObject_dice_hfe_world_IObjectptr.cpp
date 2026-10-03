// FUNCTION: BF2 0x791580
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x791580(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_WeaponObject_setObject_dice_hfe_world_IObjectptr (0x791580)
