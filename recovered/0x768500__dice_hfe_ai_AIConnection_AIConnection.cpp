// FUNCTION: BF2 0x768500
namespace dice { namespace hfe { namespace ai {
extern void* fn_407508(int a);
struct AIC { void* m_0; int m_8; unsigned char _pad[0x10 - 0xc]; void* m_10; };
void ctor_0x768500(AIC* self) {
    self->m_0 = (void*)0xba1150;
    self->m_8 = 1;
    void* p = fn_407508(0x10);
    *(void**)p = 0;
    self->m_10 = p;
    *(void**)((char*)p + 8) = 0;
    void* q = self->m_10;
    *(void**)q = 0;
}
} } }
