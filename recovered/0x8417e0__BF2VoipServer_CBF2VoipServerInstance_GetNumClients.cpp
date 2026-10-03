// FUNCTION: BF2 0x8417e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x878];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x8417e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: BF2VoipServer_CBF2VoipServerInstance_GetNumClients (0x8417e0)
