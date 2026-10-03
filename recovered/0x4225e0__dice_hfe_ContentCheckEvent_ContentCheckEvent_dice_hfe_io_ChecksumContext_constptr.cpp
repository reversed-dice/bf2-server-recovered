// FUNCTION: BF2 0x4225e0
namespace dice { namespace hfe {
extern void fn_439b10(void* a);
extern void* fn_7a16c0(void* a);
extern void* fn_7a16d0(void* a);
extern void* fn_7a16e0(void* a);
struct CCE {
    void* m_0;
    unsigned char _pad[0x10 - 0x8];
    void* m_10;
    void* m_18;
    void* m_20;
    void* m_28;
    void* m_30;
    void* m_38;
    CCE(void* arg2);
};
CCE::CCE(void* arg2) {
    fn_439b10(this);
    m_0 = (void*)0xb2bcb0;
    void* p = fn_7a16c0(arg2);
    m_10 = *(void**)p;
    m_18 = *(void**)((char*)p + 8);
    void* q = fn_7a16d0(arg2);
    m_20 = *(void**)q;
    m_28 = *(void**)((char*)q + 8);
    void* r = fn_7a16e0(arg2);
    m_30 = *(void**)r;
    m_38 = *(void**)((char*)r + 8);
}
} }
