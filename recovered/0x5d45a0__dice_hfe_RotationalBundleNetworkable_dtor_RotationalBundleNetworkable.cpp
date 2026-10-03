// FUNCTION: BF2 0x5d45a0
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void base_0x007c3c80(void* self);
extern void del_0x004085b8(void* self);
void dtor_5d45a0(void* self) {
    *(void**)self = (void*)0xb6d430;
    *(void**)((char*)self + 0x50) = (void*)0xb6d4d8;
    void* m_78 = *(void**)((char*)self + 0x78);
    if (m_78) { del_0x00408198(m_78); *(void**)((char*)self + 0x78) = 0; }
    base_0x007c3c80(self);
    del_0x004085b8(self);
}
} } }
