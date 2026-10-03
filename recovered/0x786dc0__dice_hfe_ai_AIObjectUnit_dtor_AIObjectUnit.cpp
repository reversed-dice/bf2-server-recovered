// FUNCTION: BF2 0x786dc0
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void del_0x00408198(void* p);
extern void del_0x00788c50(void* self);
void dtor_786dc0(void* self) {
    *(void**)self = (void*)0xba44b0;
    void* m_18 = *(void**)((char*)self + 0x18);
    if (m_18) del_0x00408198(m_18);
    void* m_20 = *(void**)((char*)self + 0x20);
    if (m_20) del_0x00408198(m_20);
    del_0x00788c50(self);
}
} } }
