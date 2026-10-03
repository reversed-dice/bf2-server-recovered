// FUNCTION: BF2 0x642200
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x642200(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffector_setIsActive_bool (0x642200)
