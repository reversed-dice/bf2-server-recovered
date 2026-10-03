// FUNCTION: BF2 0x625e80
namespace dice { namespace hfe { namespace world {
extern void sub_0x005b8c60(void* self);
extern void del_0x004085b8(void* p);
void dtor_625e20(void* self) {
    *(void**)self = (void*)0xb7f010;
    *(void**)((char*)self + 0x20) = (void*)0xb7f0c0;
    sub_0x005b8c60((char*)self + 0x58);
    void* m_38 = *(void**)((char*)self + 0x38);
    if (m_38 && --*(int*)m_38 == 0) del_0x004085b8(m_38);
    *(void**)((char*)self + 0x20) = (void*)0xb7ed90;
    *(void**)self = (void*)0xb7bcb0;
}
} } }
