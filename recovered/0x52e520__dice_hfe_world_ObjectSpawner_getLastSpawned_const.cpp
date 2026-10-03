// FUNCTION: BF2 0x52e520
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x298];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x52e520(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawner_getLastSpawned_const (0x52e520)
