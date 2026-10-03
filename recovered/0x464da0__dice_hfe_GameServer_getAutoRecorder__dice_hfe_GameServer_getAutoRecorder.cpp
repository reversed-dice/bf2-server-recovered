// FUNCTION: BF2 0x464da0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1e8];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x464da0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_GameServer_getAutoRecorder (0x464da0)
