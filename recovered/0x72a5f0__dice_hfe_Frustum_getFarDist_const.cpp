// FUNCTION: BF2 0x72a5f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1e0];
    float m_v;
    float get() { return m_v; }
};
float get_0x72a5f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Frustum_getFarDist_const (0x72a5f0)
