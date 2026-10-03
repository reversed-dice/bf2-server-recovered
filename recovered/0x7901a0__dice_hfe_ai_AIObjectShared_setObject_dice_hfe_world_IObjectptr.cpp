// FUNCTION: BF2 0x7901a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x7901a0(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectShared_setObject_dice_hfe_world_IObjectptr (0x7901a0)
