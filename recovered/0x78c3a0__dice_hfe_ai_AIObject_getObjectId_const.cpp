// FUNCTION: BF2 0x78c3a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0x20); }
};
unsigned int f_32(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_getObjectId_const (0x78c3a0)
