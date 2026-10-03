// FUNCTION: BF2 0x5bf010
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5bf010(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectCompTemplate_getDestroyedIconPtr (0x5bf010)
