// FUNCTION: BF2 0x532c20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x240];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x532c20(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_setDamageWhenLost_float (0x532c20)
