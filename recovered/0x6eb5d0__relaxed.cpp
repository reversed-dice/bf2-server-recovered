// FUNCTION: BF2 0x6eb5d0
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x006d6950(void* self);
void dtor_6eb600(void* self) {
    *(void**)self = (void*)0xb94cb0;
    void* m_68 = *(void**)((char*)self + 0x68);
    if (m_68) del_0x004085b8(m_68);

    del_0x006d6950(self);
}
} } }
