// FUNCTION: BF2 0x7822a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0xc); }
};
unsigned int f_48(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectArmament_isAntiAircraft_const (0x7822a0)
