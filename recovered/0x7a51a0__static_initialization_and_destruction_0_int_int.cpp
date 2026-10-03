// FUNCTION: BF2 0x7a51a0
namespace dice { namespace hfe {
extern void fn_407338(void* a);
extern void fn_4071c8(void* a, int b, void* c);
extern void* fn_407508(long a);
extern void fn_7a57a0(void* a);
void static_init_0x7a51a0(int a, int b) {
    if (a == 1) {
        if (b == 0xffff) {
            fn_407338((void*)0x10ae0e8);
            fn_4071c8((void*)0x7a3f00, 0, (void*)0xf66a88);
            void* e = fn_407508(0x2a0);
            fn_7a57a0(e);
            *(void**)0x010ae0e0 = e;
        }
    }
}
} }
