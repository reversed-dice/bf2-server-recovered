// FUNCTION: BF2 0xae5ff0
#include <string>

typedef const std::string& (*getfn_ae5ff0)(void*);
typedef void (*setfn_ae5ff0)(void*, const std::string&);

extern "C" std::string* dice_hfe_animationTools_anonymous_namespace_ConsoleClass124_executeObjectMethod(char* self)
{
    // ONE return of a merged value, never a return per branch: the null edges
    // only go cold when the returned value is an SSA phi, and without that the
    // epilogue gets duplicated.
    std::string* result = 0;
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = *(void**)0x010935c8;
        std::string* dst = (std::string*)(self + 0x110);
        dst->assign((*(getfn_ae5ff0*)(*(char**)p + 0x30))(p));
        result = dst;
    } else if (*(int*)(self + 0x30) == 1) {
        std::string a(**(std::string**)(self + 0x38));
        *(unsigned char*)(self + 0x108) = 0;
        void* p = *(void**)0x010935c8;
        (*(setfn_ae5ff0*)(*(char**)p + 0x28))(p, a);
    }
    return result;
}
