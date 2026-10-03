// FUNCTION: BF2 0x7918a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x1c); }
};
float f_576(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectArea_getRadius_const (0x505be0)
