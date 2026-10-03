// FUNCTION: BF2 0x5bf070
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5bf070(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectCompTemplate_get3dMapIcon_const (0x5bf070)
