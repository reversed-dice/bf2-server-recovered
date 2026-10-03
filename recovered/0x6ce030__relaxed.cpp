// FUNCTION: BF2 0x6ce030
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* self);
void dtor_6d7970(void* self) {
    *(void**)self = (void*)0xb91a50;
    void* m_130 = *(void**)((char*)self + 0x20);
    if (m_130) del_0x004085b8(m_130);
    void* m_138 = *(void**)((char*)self + 0x8);
    if (m_138) del_0x004085b8(m_138);
    del_0x004085b8(self);
}
} } }
