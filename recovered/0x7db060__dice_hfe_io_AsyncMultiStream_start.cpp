// FUNCTION: BF2 0x7db060
namespace dice { namespace hfe { namespace io {
extern void fn_7daf80(void* a, int b);
struct AMS { unsigned char _pad[0x10]; void* m_10; void* m_18; unsigned char _pad2[0x30 - 0x20]; char m_30; };
bool start_0x7db060(AMS* self) {
    if (self->m_18 == self->m_10)
        return 0;
    fn_7daf80(self, 0);
    self->m_30 = 1;
    return 1;
}
} } }
