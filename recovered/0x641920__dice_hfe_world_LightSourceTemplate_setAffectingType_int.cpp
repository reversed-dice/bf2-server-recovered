// FUNCTION: BF2 0x641920
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x641920(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setAffectingType_int (0x641920)
