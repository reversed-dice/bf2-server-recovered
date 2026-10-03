// FUNCTION: BF2 0x4bd460
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x4bd460(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_IObject_setGridCullerObject_dice_hfe_world_CullerObjectptr (0x4bd460)
