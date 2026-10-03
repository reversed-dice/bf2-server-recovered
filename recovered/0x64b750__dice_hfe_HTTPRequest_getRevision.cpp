// FUNCTION: BF2 0x64b750
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x64b750(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_HTTPRequest_getRevision (0x64b750)
