// FUNCTION: BF2 0x507830
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x78];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x507830(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_setCollisionPart_int (0x507830)
