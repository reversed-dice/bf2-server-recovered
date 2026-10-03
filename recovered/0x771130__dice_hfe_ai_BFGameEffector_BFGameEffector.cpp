// FUNCTION: BF2 0x771130
namespace dice { namespace hfe { namespace ai {
extern void fn_0077da20(void* a);
struct BFGE2 { void* m_0; void* m_8; void* m_10; void* m_18; };
void ctor_0x771130(BFGE2* self) {
    fn_0077da20(self);
    void* p = (char*)self + 8;
    self->m_0 = (void*)0xba19f0;
    self->m_8 = 0;
    *(void**)((char*)p + 8) = 0;
    *(void**)((char*)p + 0x10) = 0;
}
} } }
