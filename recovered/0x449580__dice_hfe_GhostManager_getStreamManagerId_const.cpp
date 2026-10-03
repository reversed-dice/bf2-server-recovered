// FUNCTION: BF2 0x449580
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2104];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x449580(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_GhostManager_getStreamManagerId_const (0x449580)
