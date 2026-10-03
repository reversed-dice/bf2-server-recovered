// FUNCTION: BF2 0x716ae0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x75];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x716ae0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionManager_drawTestedFaces_bool (0x716ae0)
