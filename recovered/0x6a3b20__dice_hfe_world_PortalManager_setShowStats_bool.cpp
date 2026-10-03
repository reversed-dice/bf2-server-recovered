// FUNCTION: BF2 0x6a3b20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x6a3b20(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PortalManager_setShowStats_bool (0x6a3b20)
