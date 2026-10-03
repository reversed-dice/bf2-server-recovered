// FUNCTION: BF2 0x716a50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x716a50(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionManager_getUseDeferredLoading_const (0x716a50)
