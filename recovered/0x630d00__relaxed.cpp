// FUNCTION: BF2 0x630d00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2c0];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x450); }
};
float f_576(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectArea_getRadius_const (0x505be0)
