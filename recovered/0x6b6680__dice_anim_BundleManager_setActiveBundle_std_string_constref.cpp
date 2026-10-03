// FUNCTION: BF2 0x6b6680
namespace dice { namespace hfe {
extern void* fn_6b85c0(void* a);
struct OB32 {
    void* m_0;
    void* m_8;
    unsigned char _pad[0x30 - 0x10];
    void* m_30;
    void f_0x6b6680();
};
void OB32::f_0x6b6680() {
    void* p = fn_6b85c0(this);
    if (p != (char*)this + 0x8)
        *(void**)((char*)this + 0x30) = *(void**)((char*)p + 0x28);
    else
        *(void**)((char*)this + 0x30) = 0;
}
} }
