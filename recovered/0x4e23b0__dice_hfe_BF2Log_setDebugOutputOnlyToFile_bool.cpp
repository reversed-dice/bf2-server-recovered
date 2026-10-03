// FUNCTION: BF2 0x4e23b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x4e23b0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_BF2Log_setDebugOutputOnlyToFile_bool (0x4e23b0)
