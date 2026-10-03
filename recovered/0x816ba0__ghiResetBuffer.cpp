// FUNCTION: BF2 0x816ba0
namespace dice { namespace hfe {
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct GRB { unsigned char _pad[8]; void* m_8; unsigned char _pad2[0x14 - 0x10]; int m_14; int m_18; unsigned char _pad3[0x28 - 0x1c]; int m_28; };
void ghiResetBuffer_0x816ba0(GRB* self) {
    if (!self)
        fn_407ee8((void*)0xbab281, (void*)0xbb3080, 0x1b5, (void*)0xbb3026);
    int v = self->m_28;
    self->m_14 = 0;
    self->m_18 = 0;
    if (!v)
        *(char*)self->m_8 = 0;
}
} }
