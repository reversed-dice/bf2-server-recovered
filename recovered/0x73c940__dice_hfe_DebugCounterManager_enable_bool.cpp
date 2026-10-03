// FUNCTION: BF2 0x73c940
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x73c940(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_DebugCounterManager_enable_bool (0x73c940)
