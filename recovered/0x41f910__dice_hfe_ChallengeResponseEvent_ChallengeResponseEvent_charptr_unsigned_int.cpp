// FUNCTION: BF2 0x41f910
namespace dice { namespace hfe {
extern void fn_439b10(void* a);
extern void fn_407f68(void* a, int b, int c);
extern void fn_407a08(void* a, char* b, int c);
struct CRE {
    void* m_0;
    unsigned char _pad[0x10 - 0x8];
    char m_10[0x4c];
    int m_5c;
    CRE(char* arg2, int arg3);
};
CRE::CRE(char* arg2, int arg3) {
    fn_439b10(this);
    m_0 = (void*)0xb2b5f0;
    fn_407f68((char*)this + 0x10, 0, 0x4a);
    fn_407a08((char*)this + 0x10, arg2, 0x49);
    m_5c = arg3;
}
} }
