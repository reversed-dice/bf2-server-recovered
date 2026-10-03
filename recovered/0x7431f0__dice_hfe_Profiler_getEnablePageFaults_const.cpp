// FUNCTION: BF2 0x7431f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x21d8];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7431f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Profiler_getEnablePageFaults_const (0x7431f0)
