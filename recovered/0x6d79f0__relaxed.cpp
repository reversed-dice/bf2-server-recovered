// FUNCTION: BF2 0x6d79f0
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void del_0x00408198(void* p);
extern void base_0x006dd400(void* self);
extern void del_0x004085b8(void* self);
void dtor_786e20(void* self) {
    *(void**)self = (void*)0xb93eb0;
    void* m_18 = *(void**)((char*)self + 0x130);
    if (m_18) del_0x00408198(m_18);
    void* m_20 = *(void**)((char*)self + 0x138);
    if (m_20) del_0x00408198(m_20);
    base_0x006dd400(self);
    del_0x004085b8(self);
}
} } }
