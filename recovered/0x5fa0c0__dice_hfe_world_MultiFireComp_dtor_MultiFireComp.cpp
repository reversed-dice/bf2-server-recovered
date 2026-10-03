// FUNCTION: BF2 0x5fa0c0
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void sub_0x004a30e0(void* self);
extern void del_0x004085b8(void* self);
void dtor_5fa0c0(void* self) {
    *(void**)self = (void*)0xb74250;
    *(void**)((char*)self + 0x20) = (void*)0xb744b8;
    void* m_1c8 = *(void**)((char*)self + 0x1c8);
    if (m_1c8) del_0x004085b8(m_1c8);
    void* m_1a0 = *(void**)((char*)self + 0x1a0);
    if (m_1a0) del_0x004085b8(m_1a0);
    void* m_180 = *(void**)((char*)self + 0x180);
    if (m_180) del_0x004085b8(m_180);
    void* m_168 = *(void**)((char*)self + 0x168);
    if (m_168) del_0x004085b8(m_168);
    void* m_a0 = *(void**)((char*)self + 0xa0);
    *(void**)self = (void*)0xb732b0;
    *(void**)((char*)self + 0x20) = (void*)0xb73518;
    if (m_a0) del_0x004085b8(m_a0);
    sub_0x004a30e0((char*)self + 0x28);
    *(void**)((char*)self + 0x20) = (void*)0xb72eb0;
    *(void**)self = (void*)0xb70110;
    del_0x004085b8(self);
}
} } }
