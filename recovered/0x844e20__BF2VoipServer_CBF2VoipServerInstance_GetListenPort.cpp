// FUNCTION: BF2 0x844e20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xa9c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x844e20(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: BF2VoipServer_CBF2VoipServerInstance_GetListenPort (0x844e20)
