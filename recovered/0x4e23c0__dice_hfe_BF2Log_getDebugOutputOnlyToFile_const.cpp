// FUNCTION: BF2 0x4e23c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4e23c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_BF2Log_getDebugOutputOnlyToFile_const (0x4e23c0)
