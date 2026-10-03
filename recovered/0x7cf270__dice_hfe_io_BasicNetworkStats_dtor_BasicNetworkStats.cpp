// FUNCTION: BF2 0x7cf270
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* self);
void dtor_7cf270(void* self) {
    *(void**)self = (void*)0xbaab70;
    void* m_50 = *(void**)((char*)self + 0x50);
    if (m_50) del_0x004085b8(m_50);
    void* m_38 = *(void**)((char*)self + 0x38);
    if (m_38) del_0x004085b8(m_38);
    void* m_20 = *(void**)((char*)self + 0x20);
    if (m_20) del_0x004085b8(m_20);
    void* m_8 = *(void**)((char*)self + 0x8);
    if (m_8) del_0x004085b8(m_8);
    del_0x004085b8(self);
}
} } }
