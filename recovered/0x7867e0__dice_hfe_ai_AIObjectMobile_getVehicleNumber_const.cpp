// FUNCTION: BF2 0x7867e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0x8); }
};
unsigned int f_32(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectMobile_getVehicleNumber_const (0x7867e0)
