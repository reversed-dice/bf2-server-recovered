// FUNCTION: BF2 0x4e2730
namespace dice { namespace hfe {
extern void fn_408238(void* a, void* b);
extern void fn_408228(void* a, void* b, int c);
struct BF2L {
    unsigned char _pad[0x10];
    char m_10;
    void setLogInsteadOfAssert_0x4e2730(bool arg2, char* arg3);
};
void BF2L::setLogInsteadOfAssert_0x4e2730(bool arg2, char* arg3) {
    if (arg2)
        fn_408238((char*)this + 0x10, arg3);
    else
        fn_408228((char*)this + 0x10, (void*)0xbb25f1, 0);
}
} }
