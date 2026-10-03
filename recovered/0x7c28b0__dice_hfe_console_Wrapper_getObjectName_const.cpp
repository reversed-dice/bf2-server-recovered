// FUNCTION: BF2 0x7c28b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    void* m_p;
    void* get() { return *(void**)((char*)m_p + 0x10); }
};
void* f_8(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_console_Wrapper_getObjectName_const (0x7c28b0)
