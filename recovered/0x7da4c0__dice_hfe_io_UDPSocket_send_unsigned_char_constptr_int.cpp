// FUNCTION: BF2 0x7da4c0
namespace dice { namespace hfe { namespace io {
extern long fn_407fa8(int a, void* b, long c, int d, void* e, int f);
extern void fn_7da420(void* a);
struct US5 { unsigned char _pad[8]; int m_8; unsigned char _pad2[0xc - 0xc]; char m_c; unsigned char _pad3[0x1d - 0xd]; char m_1d; unsigned char _pad4[0x1e - 0x1e]; char m_1e; unsigned char _pad5[0x34 - 0x1f]; int m_34; };
int send_0x7da4c0(US5* self, void* arg2, int arg3) {
    void* p1 = (char*)self + 0xc;
    void* p2 = (char*)self + 0x1e;
    void* addr = self->m_1d ? p1 : p2;
    long r = fn_407fa8(self->m_8, arg2, arg3, 0, addr, 0x10);
    if (r != -1) {
        ++self->m_34;
        return 1;
    }
    fn_7da420(self);
    return 0;
}
} } }
