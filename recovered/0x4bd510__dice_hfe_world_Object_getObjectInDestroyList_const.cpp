// FUNCTION: BF2 0x4bd510
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x212];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4bd510(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_getObjectInDestroyList_const (0x4bd510)
