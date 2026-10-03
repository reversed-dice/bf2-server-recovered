// FUNCTION: BF2 0x7c49d0
namespace dice { namespace hfe {
extern void* fn_7c5cf0(void* a, int* b);
struct OB47 {
    unsigned char _pad[0x20];
    void* m_20;
    void* m_28;
    void* f_0x7c49d0(int x);
};
void* OB47::f_0x7c49d0(int x) {
    void* p = fn_7c5cf0((char*)this + 0x20, &x);
    void* r = 0;
    if (p != (char*)this + 0x28) {
        void* q = *(void**)((char*)p + 0x28);
        if (q)
            *(char*)((char*)q + 8) = 1;
        r = q;
    }
    return r;
}
} }
