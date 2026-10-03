// FUNCTION: BF2 0x5a6a40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x68];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5a6a40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemTemplateBase_getEmitterTypeEnum_const (0x5a6a40)
