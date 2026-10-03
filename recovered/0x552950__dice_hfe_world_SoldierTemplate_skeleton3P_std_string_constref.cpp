// FUNCTION: BF2 0x552950
namespace dice { namespace hfe { namespace world {
extern void* fn_407508(int a);
extern void fn_6c8da0(void* a, void* b, void* c, int d);
struct SK3P { unsigned char _pad[0x2c0]; void* m_2c0; };
void skeleton3P_0x552950(SK3P* self, void* arg2, void* arg3) {
    char tmp;
    void* p = fn_407508(0x80);
    fn_6c8da0(p, arg2, &tmp, 0);
    self->m_2c0 = p;
}
} } }
