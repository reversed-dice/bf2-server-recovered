// FUNCTION: BF2 0x87e790
#include <sstream>
#include <string>
#include <new>
extern "C" char g_guard_010c0ab0;
extern "C" char s_value_10c0d50[0x20];
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void (*)(void*), void*, void*);
extern "C" void tcf_875360(void*);
static void __attribute__((noinline)) kill_iss_87e790(std::istringstream* p) {
    p->~basic_istringstream();
}
extern "C" void fn_87e790(void* self, int count, const std::string& value) {
    if (count != 1) return;
    if (g_guard_010c0ab0 == 0) {
        if (__cxa_guard_acquire(&g_guard_010c0ab0)) {
            *(void**)s_value_10c0d50 = (void*)0xf6c6e8;
            __cxa_guard_release(&g_guard_010c0ab0);
            __cxa_atexit(tcf_875360, 0, (void*)0xf66a88);
        }
    }
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> *(std::string*)s_value_10c0d50;
    *(void**)((char*)self + 0x38) = (void*)s_value_10c0d50;
    kill_iss_87e790(ss);
}
