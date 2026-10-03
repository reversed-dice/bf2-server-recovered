// FUNCTION: BF2 0x5adf40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2b8];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x5adf40(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WheelEffectBundle_setRotationMatrixPtr_dice_hfe_Mat4_constptr (0x5adf40)
