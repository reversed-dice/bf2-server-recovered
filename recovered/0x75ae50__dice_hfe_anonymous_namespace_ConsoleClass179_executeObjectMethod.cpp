// FUNCTION: BF2 0x75ae50
#include <string>
namespace dice { namespace hfe {
extern void* g_bfSound;
long fn_75ae50(long param_1) {
    if (*(int*)(param_1 + 0x30) == 7) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        float a1 = **(float**)(param_1 + 0x40);
        float a2 = **(float**)(param_1 + 0x48);
        float a3 = **(float**)(param_1 + 0x50);
        float a4 = **(float**)(param_1 + 0x58);
        float a5 = **(float**)(param_1 + 0x60);
        float a6 = **(float**)(param_1 + 0x68);
        *(char*)(param_1 + 0x108) = 0;
        typedef void (*Fn)(float, float, float, float, float, float, void*, const std::string*);
        Fn f = (Fn)(*(void***)g_bfSound)[0x180/8];
        f(a1, a2, a3, a4, a5, a6, g_bfSound, &s);
    }
    return 0;
}
} }
