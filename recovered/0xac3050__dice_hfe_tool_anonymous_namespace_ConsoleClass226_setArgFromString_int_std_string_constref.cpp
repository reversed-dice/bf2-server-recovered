// FUNCTION: BF2 0xac3050
#include <sstream>
#include <string>
#include <new>
extern "C" char g_guard_011392f8;
extern "C" char s_value_1139598[0x20];
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void (*)(void*), void*, void*);
extern "C" void tcf_abd830(void*);
static void __attribute__((noinline)) kill_iss_ac3050(std::istringstream* p) {
    p->~basic_istringstream();
}
extern "C" void fn_ac3050(void* self, int count, const std::string& value) {
    if (count != 1) return;
    if (g_guard_011392f8 == 0) {
        if (__cxa_guard_acquire(&g_guard_011392f8)) {
            *(void**)s_value_1139598 = (void*)0xf6c6e8;
            __cxa_guard_release(&g_guard_011392f8);
            __cxa_atexit(tcf_abd830, 0, (void*)0xf66a88);
        }
    }
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> *(std::string*)s_value_1139598;
    *(void**)((char*)self + 0x38) = (void*)s_value_1139598;
    kill_iss_ac3050(ss);
}
