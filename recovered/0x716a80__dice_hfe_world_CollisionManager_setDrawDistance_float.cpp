// FUNCTION: BF2 0x716a80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x6c];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x716a80(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionManager_setDrawDistance_float (0x716a80)
