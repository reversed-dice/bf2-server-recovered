// FUNCTION: BF2 0x786840
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x30); }
};
float f_32(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectMobile_getAvoidCollisionLookAhead_const (0x786840)
