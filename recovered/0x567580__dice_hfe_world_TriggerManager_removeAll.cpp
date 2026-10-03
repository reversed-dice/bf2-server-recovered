// FUNCTION: BF2 0x567580
namespace dice { namespace hfe { namespace world {
extern void fn_567d10(void* a);
extern void fn_567e30(void* a, void* b);
struct RMA { unsigned char _pad[8]; void* m_8; void* m_10; void* m_18; void* m_20; void* m_28; unsigned char _pad2[0x48 - 0x30]; void* m_48; };
void removeAll_0x567580(RMA* self) {
    fn_567d10((char*)self + 8);
    void* p = (char*)self + 8;
    self->m_8 = p;
    *(void**)((char*)p + 8) = p;
    void* q = (char*)self + 0x18;
    fn_567e30(q, *(void**)((char*)q + 0x10));
    void* r = (char*)self + 0x20;
    *(void**)((char*)q + 0x10) = 0;
    *(void**)((char*)q + 0x28) = 0;
    *(void**)((char*)q + 0x18) = r;
    *(void**)((char*)q + 0x20) = r;
    self->m_48 = self->m_8;
}
} } }
