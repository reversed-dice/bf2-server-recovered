// FUNCTION: BF2 0x7e5140
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void del_0x004085b8(void* self);
void dtor_7e5140(void* self) {
    *(void**)self = (void*)0xbacad0;
    *(void**)((char*)self + 0x8) = (void*)0xbacbb0;
    void* m_18 = *(void**)((char*)self + 0x18);
    if (m_18) del_0x00408198(m_18);

    del_0x004085b8(self);
}
} } }
