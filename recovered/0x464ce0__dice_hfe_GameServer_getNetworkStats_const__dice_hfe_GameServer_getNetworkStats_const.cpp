// FUNCTION: BF2 0x464ce0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x160];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x464ce0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_GameServer_getNetworkStats_const (0x464ce0)
