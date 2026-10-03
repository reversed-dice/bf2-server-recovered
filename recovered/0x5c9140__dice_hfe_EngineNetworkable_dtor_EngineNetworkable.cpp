// FUNCTION: BF2 0x5c9140
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void base_0x007c3c80(void* self);
extern void del_0x004085b8(void* self);
void dtor_5c9140(void* self) {
    *(void**)self = (void*)0xb6c7b0;
    *(void**)((char*)self + 0x50) = (void*)0xb6c858;
    void* m_80 = *(void**)((char*)self + 0x80);
    if (m_80) { del_0x00408198(m_80); *(void**)((char*)self + 0x80) = 0; }
    base_0x007c3c80(self);
    del_0x004085b8(self);
}
} } }
