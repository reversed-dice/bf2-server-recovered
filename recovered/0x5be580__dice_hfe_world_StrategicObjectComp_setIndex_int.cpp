// FUNCTION: BF2 0x5be580
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5be580(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectComp_setIndex_int (0x5be580)
