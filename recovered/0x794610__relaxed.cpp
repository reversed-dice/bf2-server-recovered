// FUNCTION: BF2 0x794610
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void del_0x00408198(void* p);
extern void base_0x00794480(void* self);
extern void del_0x004085b8(void* self);
void dtor_6d79f0(void* self) {
    *(void**)self = (void*)0xba71b0;
    void* m_130 = *(void**)((char*)self + 0x8);
    if (m_130) del_0x00408198(m_130);
    void* m_138 = *(void**)((char*)self + 0x10);
    if (m_138) del_0x00408198(m_138);
    base_0x00794480(self);
    del_0x004085b8(self);
}
} } }
