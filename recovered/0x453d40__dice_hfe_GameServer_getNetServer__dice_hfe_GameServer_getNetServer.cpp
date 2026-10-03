// FUNCTION: BF2 0x453d40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb0];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x453d40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_GameServer_getNetServer (0x453d40)
