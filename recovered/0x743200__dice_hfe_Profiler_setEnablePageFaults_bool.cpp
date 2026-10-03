// FUNCTION: BF2 0x743200
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x21d8];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x743200(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_Profiler_setEnablePageFaults_bool (0x743200)
