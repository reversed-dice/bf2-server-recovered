// FUNCTION: BF2 0x616640
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x260];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x616640(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_setTracerInterval_int (0x616640)
