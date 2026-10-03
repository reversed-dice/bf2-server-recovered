// FUNCTION: BF2 0x4bd580
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1ec];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4bd580(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_getUpdateFrequencyType_const (0x4bd580)
