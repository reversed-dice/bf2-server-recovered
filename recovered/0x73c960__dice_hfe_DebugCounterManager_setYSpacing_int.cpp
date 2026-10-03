// FUNCTION: BF2 0x73c960
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x73c960(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_DebugCounterManager_setYSpacing_int (0x73c960)
