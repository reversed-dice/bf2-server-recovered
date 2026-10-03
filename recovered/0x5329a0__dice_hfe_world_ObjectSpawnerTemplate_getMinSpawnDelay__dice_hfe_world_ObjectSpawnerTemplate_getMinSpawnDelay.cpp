// FUNCTION: BF2 0x5329a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x210];
    float m_v;
    float get() { return m_v; }
};
float get_0x5329a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_getMinSpawnDelay (0x5329a0)
