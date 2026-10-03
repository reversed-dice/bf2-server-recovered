// FUNCTION: BF2 0x4ed7e0
namespace dice { namespace hfe {
extern void* fn_407508(int size);
extern void* g_108dae0;
extern char g_108dad9;
extern char g_108dae8;
void f_0x4ed7e0() {
    if (!g_108dae8) {
        void* p = fn_407508(0x10);
        *(void**)p = p;
        *(void**)((char*)p + 8) = p;
        g_108dae0 = p;
        g_108dad9 = 0;
        g_108dae8 = 1;
    }
}
} }
