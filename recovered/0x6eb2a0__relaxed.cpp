// FUNCTION: BF2 0x6eb2a0
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void base_0x006d6950(void* self);
extern void del_0x004085b8(void* self);
void dtor_6f0e00(void* self) {
    *(void**)self = (void*)0xb94cb0;
    void* m_110 = *(void**)((char*)self + 0x68);
    if (m_110) del_0x004085b8(m_110);
    base_0x006d6950(self);
    del_0x004085b8(self);
}
} } }
