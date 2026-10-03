// FUNCTION: BF2 0x41cf50
namespace dice { namespace hfe {
extern void fn_41c290(void* a, int b);
struct GDB { unsigned char _pad[0x78]; void* m_78; void* m_80; };
void getDataBlock_0x41cf50(GDB* self, void** out1, int* out2, bool arg4) {
    fn_41c290(self, (int)arg4);
    *out1 = self->m_78;
    *out2 = (int)((char*)self->m_80 - (char*)self->m_78);
}
} }
