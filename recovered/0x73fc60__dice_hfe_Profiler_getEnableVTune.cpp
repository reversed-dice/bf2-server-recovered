// FUNCTION: BF2 0x73fc60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x21c8];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x73fc60(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Profiler_getEnableVTune (0x73fc60)
