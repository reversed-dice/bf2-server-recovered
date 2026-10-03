// FUNCTION: BF2 0x5e1380
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void base_0x007c3c80(void* self);
extern void del_0x004085b8(void* self);
void dtor_5d2910(void* self) {
    *(void**)self = (void*)0xb6ddb0;
    *(void**)((char*)self + 0x50) = (void*)0xb6de58;
    void* m_78 = *(void**)((char*)self + 0x78);
    if (m_78) del_0x00408198(m_78);
    base_0x007c3c80(self);
    del_0x004085b8(self);
}
} } }
