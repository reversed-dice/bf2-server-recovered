// FUNCTION: BF2 0x6871a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20f];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6871a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_getIsOvergrowth (0x6871a0)
