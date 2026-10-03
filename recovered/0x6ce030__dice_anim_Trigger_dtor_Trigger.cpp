// FUNCTION: BF2 0x6ce030
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* self);
void dtor_6ce030(void* self) {
    *(void**)self = (void*)0xb91a50;
    void* m_20 = *(void**)((char*)self + 0x20);
    if (m_20) del_0x004085b8(m_20);
    void* m_8 = *(void**)((char*)self + 0x8);
    if (m_8) del_0x004085b8(m_8);
    del_0x004085b8(self);
}
} } }
