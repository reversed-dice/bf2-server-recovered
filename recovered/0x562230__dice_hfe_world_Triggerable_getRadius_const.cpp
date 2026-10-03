// FUNCTION: BF2 0x562230
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x248];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x20c); }
};
float f_584(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Triggerable_getRadius_const (0x562230)
