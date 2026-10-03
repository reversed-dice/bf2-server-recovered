// FUNCTION: BF2 0x592f30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    void* m_p;
    void* get() { return (char*)m_p + 0x3a0; }
};
void* f_40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectBundle_getWorkOnMaterials (0x592f30)
