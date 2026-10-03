// FUNCTION: BF2 0x618640
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x18); }
};
float f_48(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishCollisionComp_getHealEffect_dice_hfe_Vec3ref_const (0x618640)
