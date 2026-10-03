// FUNCTION: BF2 0x6cf5e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x42];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6cf5e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_anim_Trigger_getAlreadySaved_const (0x6cf5e0)
