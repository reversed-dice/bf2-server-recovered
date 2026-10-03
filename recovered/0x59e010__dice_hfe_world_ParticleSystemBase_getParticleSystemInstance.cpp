// FUNCTION: BF2 0x59e010
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x218];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x59e010(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemBase_getParticleSystemInstance (0x59e010)
