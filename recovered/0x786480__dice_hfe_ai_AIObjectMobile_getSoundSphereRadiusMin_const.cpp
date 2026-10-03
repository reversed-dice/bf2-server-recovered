// FUNCTION: BF2 0x786480
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x24); }
};
float f_32(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectMobile_getSoundSphereRadiusMin_const (0x786480)
