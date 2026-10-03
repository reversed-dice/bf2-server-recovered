// FUNCTION: BF2 0x782d50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    void* get() { return (char*)m_p + 0xb8; }
};
void* f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectControlInfo_getCameraRelativeMaxRotation_const (0x782d50)
