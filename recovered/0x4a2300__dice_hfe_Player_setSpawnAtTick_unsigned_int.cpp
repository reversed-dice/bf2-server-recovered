// FUNCTION: BF2 0x4a2300
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x104];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x4a2300(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_setSpawnAtTick_unsigned_int (0x4a2300)
