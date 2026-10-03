// FUNCTION: BF2 0x4af640
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void sub_0x007c3c80(void* self);
void dtor_4af640(void* self) {
    *(void**)self = (void*)0xb36030;
    *(void**)((char*)self + 0x8) = (void*)0xb36230;
    void* m_1e0 = *(void**)((char*)self + 0x1e0);
    if (m_1e0) del_0x00408198(m_1e0);
    sub_0x007c3c80((char*)self + 0x8);
}
} } }
