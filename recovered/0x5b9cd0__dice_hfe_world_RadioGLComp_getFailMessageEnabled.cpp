// FUNCTION: BF2 0x5b9cd0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5b9cd0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_RadioGLComp_getFailMessageEnabled (0x5b9cd0)
