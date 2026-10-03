// FUNCTION: BF2 0x561140
namespace dice { namespace hfe {
extern void* g_0x0108f1b0;
extern void fn_0x00567890(void* p, void* self);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void base_0x00573ec0(void* self);
extern void del_0x004085b8(void* self);
void dtor_561140(void* self) {
    *(void**)self = (void*)0xb51c50;
    *(void**)((char*)self + 0x100) = (void*)0xb51f60;
    void* g = g_0x0108f1b0;
    if (g) fn_0x00567890(g, self);
    void* m_270 = *(void**)((char*)self + 0x270);
    if (m_270) del_0x004085b8(m_270);
    void* m_250 = *(void**)((char*)self + 0x250);
    if (m_250) del_0x004085b8(m_250);
    base_0x00573ec0(self);
    del_0x004085b8(self);
}
} }
