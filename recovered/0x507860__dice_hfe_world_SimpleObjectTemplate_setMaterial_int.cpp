// FUNCTION: BF2 0x507860
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x100];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x507860(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_setMaterial_int (0x507860)
