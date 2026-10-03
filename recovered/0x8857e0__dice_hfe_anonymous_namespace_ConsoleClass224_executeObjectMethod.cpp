// FUNCTION: BF2 0x8857e0
#include <string>

typedef const std::string& (*getfn_8857e0)(void*);
typedef void (*setfn_8857e0)(void*, const std::string&);

extern "C" std::string* dice_hfe_anonymous_namespace_ConsoleClass224_executeObjectMethod(char* self)
{
    // ONE return of a merged value, never a return per branch: the null edges
    // only go cold when the returned value is an SSA phi, and without that the
    // epilogue gets duplicated.
    std::string* result = 0;
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = *(void**)0x010b8c08;
        std::string* dst = (std::string*)(self + 0x110);
        dst->assign((*(getfn_8857e0*)(*(char**)p + 0x1b0))(p));
        result = dst;
    } else if (*(int*)(self + 0x30) == 1) {
        std::string a(**(std::string**)(self + 0x38));
        *(unsigned char*)(self + 0x108) = 0;
        void* p = *(void**)0x010b8c08;
        (*(setfn_8857e0*)(*(char**)p + 0x1a8))(p, a);
    }
    return result;
}
