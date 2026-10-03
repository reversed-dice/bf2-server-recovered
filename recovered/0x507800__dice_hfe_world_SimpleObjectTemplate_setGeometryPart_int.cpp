// FUNCTION: BF2 0x507800
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x74];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x507800(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_setGeometryPart_int (0x507800)
