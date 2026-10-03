// FUNCTION: BF2 0x5daa90
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void del_0x007c3c80(void* self);
void dtor_5daa90(void* self) {
    *(void**)self = (void*)0xb6d7b0;
    *(void**)((char*)self + 0x50) = (void*)0xb6d860;
    void* m_78 = *(void**)((char*)self + 0x78);
    if (m_78) del_0x00408198(m_78);

    del_0x007c3c80(self);
}
} } }
