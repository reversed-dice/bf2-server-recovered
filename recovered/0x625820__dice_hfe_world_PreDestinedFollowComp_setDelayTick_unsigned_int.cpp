// FUNCTION: BF2 0x625820
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x625820(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PreDestinedFollowComp_setDelayTick_unsigned_int (0x625820)
