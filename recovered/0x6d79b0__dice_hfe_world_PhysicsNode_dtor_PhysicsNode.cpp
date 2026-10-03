// FUNCTION: BF2 0x6d79b0
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void del_0x00408198(void* p);
extern void del_0x006dd400(void* self);
void dtor_6d79b0(void* self) {
    *(void**)self = (void*)0xb93eb0;
    void* m_130 = *(void**)((char*)self + 0x130);
    if (m_130) del_0x00408198(m_130);
    void* m_138 = *(void**)((char*)self + 0x138);
    if (m_138) del_0x00408198(m_138);
    del_0x006dd400(self);
}
} } }
