// FUNCTION: BF2 0x6f0e00
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void base_0x006dd400(void* self);
extern void del_0x004085b8(void* self);
void dtor_6f0e00(void* self) {
    *(void**)self = (void*)0xb95490;
    void* m_110 = *(void**)((char*)self + 0x110);
    if (m_110) del_0x00408198(m_110);
    base_0x006dd400(self);
    del_0x004085b8(self);
}
} } }
