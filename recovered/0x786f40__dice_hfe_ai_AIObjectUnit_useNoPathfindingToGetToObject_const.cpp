// FUNCTION: BF2 0x786f40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    unsigned char get() { return *(unsigned char*)((char*)m_p + 0x25); }
};
unsigned int f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectUnit_useNoPathfindingToGetToObject_const (0x786f40)
