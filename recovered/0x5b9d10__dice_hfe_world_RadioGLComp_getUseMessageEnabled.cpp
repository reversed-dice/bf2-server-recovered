// FUNCTION: BF2 0x5b9d10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x21];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5b9d10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_RadioGLComp_getUseMessageEnabled (0x5b9d10)
