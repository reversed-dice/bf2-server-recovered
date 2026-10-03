// FUNCTION: BF2 0xa3b560
#include <sstream>
#include <string>
#include <new>
extern "C" char g_guard_0111fb90;
extern "C" char s_value_111fdb0[0x20];
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void (*)(void*), void*, void*);
extern "C" void tcf_a32ea0(void*);
static void __attribute__((noinline)) kill_iss_a3b560(std::istringstream* p) {
    p->~basic_istringstream();
}
extern "C" void fn_a3b560(void* self, int count, const std::string& value) {
    if (count != 1) return;
    if (g_guard_0111fb90 == 0) {
        if (__cxa_guard_acquire(&g_guard_0111fb90)) {
            *(void**)s_value_111fdb0 = (void*)0xf6c6e8;
            __cxa_guard_release(&g_guard_0111fb90);
            __cxa_atexit(tcf_a32ea0, 0, (void*)0xf66a88);
        }
    }
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> *(std::string*)s_value_111fdb0;
    *(void**)((char*)self + 0x38) = (void*)s_value_111fdb0;
    kill_iss_a3b560(ss);
}
