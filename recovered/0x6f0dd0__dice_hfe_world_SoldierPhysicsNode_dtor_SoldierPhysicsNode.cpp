// FUNCTION: BF2 0x6f0dd0
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void del_0x006dd400(void* self);
void dtor_6f0dd0(void* self) {
    *(void**)self = (void*)0xb95490;
    void* m_110 = *(void**)((char*)self + 0x110);
    if (m_110) del_0x00408198(m_110);

    del_0x006dd400(self);
}
} } }
