// FUNCTION: BF2 0x7e53f0
namespace dice { namespace hfe { namespace io {
extern void* fn_4073a8(int a);
struct SMS { unsigned char _pad[0x18]; void* m_18; unsigned char _pad2[0x24 - 0x20]; int m_24; };
void setMaxSize_0x7e53f0(SMS* self, unsigned int arg2) {
    void* p = fn_4073a8(arg2);
    self->m_24 = arg2;
    self->m_18 = p;
}
} } }
