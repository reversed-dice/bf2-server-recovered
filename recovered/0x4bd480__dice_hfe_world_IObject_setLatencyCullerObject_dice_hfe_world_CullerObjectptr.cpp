// FUNCTION: BF2 0x4bd480
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x4bd480(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_IObject_setLatencyCullerObject_dice_hfe_world_CullerObjectptr (0x4bd480)
