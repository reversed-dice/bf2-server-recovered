// FUNCTION: BF2 0x5bbc60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x5bbc60(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HelpHudComp_setObject_dice_hfe_world_IObjectptr (0x5bbc60)
