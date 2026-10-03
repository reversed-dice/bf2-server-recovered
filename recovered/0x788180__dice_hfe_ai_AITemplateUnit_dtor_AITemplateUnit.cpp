// FUNCTION: BF2 0x788180
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void del_0x00408198(void* p);
void dtor_788180(void* self) {
    *(void**)self = (void*)0xba4670;
    void* m_10 = *(void**)((char*)self + 0x10);
    if (m_10) del_0x00408198(m_10);
    void* m_18 = *(void**)((char*)self + 0x18);
    if (m_18) del_0x00408198(m_18);
    *(void**)self = (void*)0xba3710;
}
} } }
