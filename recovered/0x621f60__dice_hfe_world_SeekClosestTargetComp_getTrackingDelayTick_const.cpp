// FUNCTION: BF2 0x621f60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0x24); }
};
unsigned int f_88(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SeekClosestTargetComp_getTrackingDelayTick_const (0x621f60)
