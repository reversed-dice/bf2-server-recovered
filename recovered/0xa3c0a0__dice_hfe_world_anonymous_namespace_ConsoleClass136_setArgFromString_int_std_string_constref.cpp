// FUNCTION: BF2 0xa3c0a0
#include <sstream>
#include <string>
#include <new>
extern "C" char g_guard_0111fc08;
extern "C" char s_value_111fe28[0x20];
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void (*)(void*), void*, void*);
extern "C" void tcf_a33260(void*);
static void __attribute__((noinline)) kill_iss_a3c0a0(std::istringstream* p) {
    p->~basic_istringstream();
}
extern "C" void fn_a3c0a0(void* self, int count, const std::string& value) {
    if (count != 1) return;
    if (g_guard_0111fc08 == 0) {
        if (__cxa_guard_acquire(&g_guard_0111fc08)) {
            *(void**)s_value_111fe28 = (void*)0xf6c6e8;
            __cxa_guard_release(&g_guard_0111fc08);
            __cxa_atexit(tcf_a33260, 0, (void*)0xf66a88);
        }
    }
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> *(std::string*)s_value_111fe28;
    *(void**)((char*)self + 0x38) = (void*)s_value_111fe28;
    kill_iss_a3c0a0(ss);
}
