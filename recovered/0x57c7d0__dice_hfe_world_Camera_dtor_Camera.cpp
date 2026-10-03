// FUNCTION: BF2 0x57c7d0
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void sub_0x0057c480(void* self);
extern void del_0x005853b0(void* self);
void dtor_57c7d0(void* self) {
    *(void**)self = (void*)0xb572f0;
    *(void**)((char*)self + 0x100) = (void*)0xb57718;
    *(void**)((char*)self + 0x238) = (void*)0xb57750;
    *(void**)((char*)self + 0x2c0) = (void*)0xb57770;
    void* m_410 = *(void**)((char*)self + 0x410);
    if (m_410) del_0x004085b8(m_410);
    void* m_3f8 = *(void**)((char*)self + 0x3f8);
    if (m_3f8) del_0x004085b8(m_3f8);
    sub_0x0057c480((char*)self + 0x2f0);
    del_0x005853b0(self);
}
} } }
