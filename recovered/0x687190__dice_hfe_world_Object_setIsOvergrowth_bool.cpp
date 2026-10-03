// FUNCTION: BF2 0x687190
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20f];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x687190(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_setIsOvergrowth_bool (0x687190)
