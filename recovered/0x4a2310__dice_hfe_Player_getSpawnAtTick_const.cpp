// FUNCTION: BF2 0x4a2310
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x104];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4a2310(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_getSpawnAtTick_const (0x4a2310)
