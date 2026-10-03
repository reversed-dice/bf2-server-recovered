// FUNCTION: BF2 0x6bbd40
namespace dice { namespace hfe {
extern void* fn_407508(int size);
extern void fn_6bbaa0(void* a);
extern void* g_10936a0;
void f_0x6bbd40() {
    if (!g_10936a0) {
        void* p = fn_407508(0x358);
        fn_6bbaa0(p);
        g_10936a0 = p;
    }
}
} }
