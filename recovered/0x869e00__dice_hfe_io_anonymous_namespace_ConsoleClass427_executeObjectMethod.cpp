// FUNCTION: BF2 0x869e00
#include <string>

typedef const std::string& (*getfn_869e00)(void*);
typedef void (*setfn_869e00)(void*, const std::string&);

extern "C" std::string* dice_hfe_io_anonymous_namespace_ConsoleClass427_executeObjectMethod(char* self)
{
    // ONE return of a merged value, never a return per branch: the null edges
    // only go cold when the returned value is an SSA phi, and without that the
    // epilogue gets duplicated.
    std::string* result = 0;
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = *(void**)0x010ae100;
        std::string* dst = (std::string*)(self + 0x110);
        dst->assign((*(getfn_869e00*)(*(char**)p + 0x110))(p));
        result = dst;
    } else if (*(int*)(self + 0x30) == 1) {
        std::string a(**(std::string**)(self + 0x38));
        *(unsigned char*)(self + 0x108) = 0;
        void* p = *(void**)0x010ae100;
        (*(setfn_869e00*)(*(char**)p + 0x118))(p, a);
    }
    return result;
}
