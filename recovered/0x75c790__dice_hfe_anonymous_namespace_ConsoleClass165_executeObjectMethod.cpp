// FUNCTION: BF2 0x75c790
#include <string>
namespace dice { namespace hfe {
extern void* g_bfSound;

long fn_75c790(long param_1) {
    if (*(int*)(param_1 + 0x30) == 3) {
        unsigned a1 = **(unsigned**)(param_1 + 0x38);
        std::string s(*(const std::string*)*(void**)(param_1 + 0x40));
        unsigned a2 = **(unsigned**)(param_1 + 0x48);
        *(char*)(param_1 + 0x108) = 0;
        typedef void (*Fn)(void*, unsigned, const std::string*, unsigned);
        Fn f = (Fn)(*(void***)g_bfSound)[0x14];
        f(g_bfSound, a1, &s, a2);
    }
    return 0;
}
} }
