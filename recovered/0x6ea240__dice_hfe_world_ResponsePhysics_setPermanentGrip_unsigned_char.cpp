// FUNCTION: BF2 0x6ea240
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10d];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x6ea240(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ResponsePhysics_setPermanentGrip_unsigned_char (0x6ea240)
