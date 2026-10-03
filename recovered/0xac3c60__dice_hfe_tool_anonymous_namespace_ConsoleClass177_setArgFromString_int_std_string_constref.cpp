// FUNCTION: BF2 0xac3c60
#include <sstream>
#include <string>
#include <new>
extern "C" char g_guard_011393c8;
extern "C" char s_value_1139618[0x20];
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void (*)(void*), void*, void*);
extern "C" void tcf_abdbf0(void*);
static void __attribute__((noinline)) kill_iss_ac3c60(std::istringstream* p) {
    p->~basic_istringstream();
}
extern "C" void fn_ac3c60(void* self, int count, const std::string& value) {
    if (count != 1) return;
    if (g_guard_011393c8 == 0) {
        if (__cxa_guard_acquire(&g_guard_011393c8)) {
            *(void**)s_value_1139618 = (void*)0xf6c6e8;
            __cxa_guard_release(&g_guard_011393c8);
            __cxa_atexit(tcf_abdbf0, 0, (void*)0xf66a88);
        }
    }
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> *(std::string*)s_value_1139618;
    *(void**)((char*)self + 0x38) = (void*)s_value_1139618;
    kill_iss_ac3c60(ss);
}
