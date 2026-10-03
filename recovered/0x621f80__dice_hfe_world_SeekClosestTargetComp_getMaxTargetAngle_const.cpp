// FUNCTION: BF2 0x621f80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x14); }
};
float f_88(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SeekClosestTargetComp_getMaxTargetAngle_const (0x621f80)
