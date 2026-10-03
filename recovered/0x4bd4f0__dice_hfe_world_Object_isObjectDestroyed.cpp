// FUNCTION: BF2 0x4bd4f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20d];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4bd4f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_isObjectDestroyed (0x4bd4f0)
