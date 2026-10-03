// FUNCTION: BF2 0x62aec0
namespace dice { namespace hfe { namespace world {
extern void del_0x0062bde0(void* p);
extern void base_0x0062bde0(void* self);
extern void del_0x004085b8(void* self);
void dtor_62aec0(void* self) {
    *(void**)self = (void*)0xb80070;
    *(void**)((char*)self + 0x20) = (void*)0xb80220;
    void* m_38 = *(void**)((char*)self + 0x38);
    if (m_38 && --*(int*)m_38 == 0) del_0x0062bde0(m_38);
    base_0x0062bde0(self);
    del_0x004085b8(self);
}
} } }
