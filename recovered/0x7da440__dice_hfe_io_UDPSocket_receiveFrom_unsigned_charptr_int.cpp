// FUNCTION: BF2 0x7da440
namespace dice { namespace hfe { namespace io {
extern int fn_4076f8(int a, void* b, long c, int d, void* e, void* f);
extern void fn_7da420(void* a);
struct RFS { unsigned char _pad[8]; int m_8; unsigned char _pad2[0x1e - 0xc]; char m_1e; };
int receiveFrom_0x7da440(RFS* self, void* arg2, int arg3) {
    int len = 0x10;
    int r = fn_4076f8(self->m_8, arg2, arg3, 0, (char*)self + 0x1e, &len);
    if (r != -1)
        return r;
    fn_7da420(self);
    return 0;
}
} } }
