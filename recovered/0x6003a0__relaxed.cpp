// FUNCTION: BF2 0x6003a0
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void sub_0x004a30e0(void* self);
extern void del_0x004085b8(void* self);
void dtor_5f8d80(void* self) {
    *(void**)self = (void*)0xb732b0;
    *(void**)((char*)self + 0x20) = (void*)0xb73518;
    void* m_a0 = *(void**)((char*)self + 0xa0);
    if (m_a0) del_0x004085b8(m_a0);
    sub_0x004a30e0((char*)self + 0x28);
    *(void**)((char*)self + 0x20) = (void*)0xb72eb0;
    *(void**)self = (void*)0xb70110;
    del_0x004085b8(self);
}
} } }
