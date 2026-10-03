// FUNCTION: BF2 0x772ca0
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x0077dcb0(void* self);
void dtor_772c60(void* self) {
    *(void**)self = (void*)0xba1ad0;
    void* m_38 = *(void**)((char*)self + 0x38);
    if (m_38) del_0x004085b8(m_38);
    void* m_20 = *(void**)((char*)self + 0x20);
    if (m_20) del_0x004085b8(m_20);
    void* m_8 = *(void**)((char*)self + 0x8);
    if (m_8) del_0x004085b8(m_8);
    del_0x0077dcb0(self);
}
} } }
