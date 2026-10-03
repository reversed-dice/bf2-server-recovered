// FUNCTION: BF2 0x642bf0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    float m_v;
    float get() { return m_v; }
};
float get_0x642bf0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffectorTemplate_getWindBlowTime_const (0x642bf0)
