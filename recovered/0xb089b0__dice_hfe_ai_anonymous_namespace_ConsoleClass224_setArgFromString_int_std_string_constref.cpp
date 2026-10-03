// FUNCTION: BF2 0xb089b0
#include <sstream>
#include <string>
#include <new>
extern "C" char g_guard_0114b5d8;
extern "C" char s_value_114b7e0[0x20];
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void (*)(void*), void*, void*);
extern "C" void tcf_b00a10(void*);
static void __attribute__((noinline)) kill_iss_b089b0(std::istringstream* p) {
    p->~basic_istringstream();
}
extern "C" void fn_b089b0(void* self, int count, const std::string& value) {
    if (count != 1) return;
    if (g_guard_0114b5d8 == 0) {
        if (__cxa_guard_acquire(&g_guard_0114b5d8)) {
            *(void**)s_value_114b7e0 = (void*)0xf6c6e8;
            __cxa_guard_release(&g_guard_0114b5d8);
            __cxa_atexit(tcf_b00a10, 0, (void*)0xf66a88);
        }
    }
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> *(std::string*)s_value_114b7e0;
    *(void**)((char*)self + 0x38) = (void*)s_value_114b7e0;
    kill_iss_b089b0(ss);
}
