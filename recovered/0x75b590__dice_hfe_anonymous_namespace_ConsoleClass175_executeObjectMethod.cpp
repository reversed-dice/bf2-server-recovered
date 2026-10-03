// FUNCTION: BF2 0x75b590
#include <string>
namespace dice { namespace hfe {
extern void* g_bfSound;
long fn_75b590(long param_1) {
    if (*(int*)(param_1 + 0x30) == 2) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        float a1 = **(float**)(param_1 + 0x40);
        *(char*)(param_1 + 0x108) = 0;
        typedef void (*Fn)(float, void*, const std::string*);
        Fn f = (Fn)(*(void***)g_bfSound)[200/8];
        f(a1, g_bfSound, &s);
    }
    return 0;
}
} }
