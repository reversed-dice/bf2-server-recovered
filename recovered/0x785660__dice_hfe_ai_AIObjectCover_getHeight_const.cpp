// FUNCTION: BF2 0x785660
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x14); }
};
float f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectCover_getHeight_const (0x785660)
