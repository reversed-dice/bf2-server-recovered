// FUNCTION: BF2 0x75baa0
#include <string>
namespace dice { namespace hfe {
extern void* g_bfSound;
long fn_75baa0(long param_1) {
    if (*(int*)(param_1 + 0x30) == 5) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        float a1 = **(float**)(param_1 + 0x40);
        float a2 = **(float**)(param_1 + 0x48);
        float a3 = **(float**)(param_1 + 0x50);
        float a4 = **(float**)(param_1 + 0x58);
        *(char*)(param_1 + 0x108) = 0;
        typedef void (*Fn)(float, float, float, float, void*, const std::string*);
        Fn f = (Fn)(*(void***)g_bfSound)[0xe0/8];
        f(a1, a2, a3, a4, g_bfSound, &s);
    }
    return 0;
}
} }
