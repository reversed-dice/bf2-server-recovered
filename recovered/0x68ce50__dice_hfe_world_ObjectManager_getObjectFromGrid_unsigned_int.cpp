// FUNCTION: BF2 0x68ce50
namespace dice { namespace hfe {
extern void* fn_487090(void* a, int* b);
struct OB30 {
    unsigned char _pad[0x158];
    void* m_158;
    unsigned char _pad2[0x160 - 0x160];
    void* m_160;
    void* f_0x68ce50(int x);
};
void* OB30::f_0x68ce50(int x) {
    void* p = fn_487090((char*)this + 0x158, &x);
    if (p == (char*)this + 0x160)
        return 0;
    return *(void**)((char*)p + 0x28);
}
} }
