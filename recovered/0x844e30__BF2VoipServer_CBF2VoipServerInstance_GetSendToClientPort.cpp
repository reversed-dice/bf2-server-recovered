// FUNCTION: BF2 0x844e30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xaa0];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x844e30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: BF2VoipServer_CBF2VoipServerInstance_GetSendToClientPort (0x844e30)
