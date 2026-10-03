// FUNCTION: BF2 0x6d79b0
namespace dice { namespace hfe { namespace world {
extern void del_0x006dd400(void* p);
extern void del_0x006dd400(void* p);
extern void del_0x006dd400(void* self);
void dtor_6ce030(void* self) {
    *(void**)self = (void*)0xb93eb0;
    void* m_20 = *(void**)((char*)self + 0x130);
    if (m_20) del_0x006dd400(m_20);
    void* m_8 = *(void**)((char*)self + 0x138);
    if (m_8) del_0x006dd400(m_8);
    del_0x006dd400(self);
}
} } }
