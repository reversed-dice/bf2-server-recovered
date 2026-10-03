// FUNCTION: BF2 0x697da0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x697da0(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectManager_setActiveObject_dice_hfe_world_IObjectptr (0x697da0)
