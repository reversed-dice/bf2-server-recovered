// FUNCTION: BF2 0x4bd600
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20c];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4bd600(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_getGroup (0x4bd600)
