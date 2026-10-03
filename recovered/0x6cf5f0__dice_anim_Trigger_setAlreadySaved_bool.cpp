// FUNCTION: BF2 0x6cf5f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x42];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x6cf5f0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_anim_Trigger_setAlreadySaved_bool (0x6cf5f0)
