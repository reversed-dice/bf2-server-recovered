// FUNCTION: BF2 0x901510
#include <sstream>
#include <string>
#include <new>
extern "C" char g_guard_010efdf0;
extern "C" char s_value_10f0760[0x20];
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void (*)(void*), void*, void*);
extern "C" void tcf_8c2fe0(void*);
static void __attribute__((noinline)) kill_iss_901510(std::istringstream* p) {
    p->~basic_istringstream();
}
extern "C" void fn_901510(void* self, int count, const std::string& value) {
    if (count != 1) return;
    if (g_guard_010efdf0 == 0) {
        if (__cxa_guard_acquire(&g_guard_010efdf0)) {
            *(void**)s_value_10f0760 = (void*)0xf6c6e8;
            __cxa_guard_release(&g_guard_010efdf0);
            __cxa_atexit(tcf_8c2fe0, 0, (void*)0xf66a88);
        }
    }
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> *(std::string*)s_value_10f0760;
    *(void**)((char*)self + 0x38) = (void*)s_value_10f0760;
    kill_iss_901510(ss);
}
