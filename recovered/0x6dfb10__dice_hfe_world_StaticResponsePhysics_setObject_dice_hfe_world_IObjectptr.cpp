// FUNCTION: BF2 0x6dfb10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x6dfb10(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StaticResponsePhysics_setObject_dice_hfe_world_IObjectptr (0x6dfb10)
