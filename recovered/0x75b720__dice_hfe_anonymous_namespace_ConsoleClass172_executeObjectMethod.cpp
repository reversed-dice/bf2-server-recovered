// FUNCTION: BF2 0x75b720
#include <string>
namespace dice { namespace hfe {
extern void* g_bfSound;
long fn_75b720(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        typedef void (*Fn)(void*, const std::string*);
        Fn f = (Fn)(*(void***)g_bfSound)[0xb0/8];
        f(g_bfSound, &s);
    }
    return 0;
}
} }
