// FUNCTION: BF2 0x716ab0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x73];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x716ab0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionManager_drawPivots_bool (0x716ab0)
