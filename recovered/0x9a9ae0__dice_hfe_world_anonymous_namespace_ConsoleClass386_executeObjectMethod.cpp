// FUNCTION: BF2 0x9a9ae0
#include <string>

void* _ZN4dice3hfe5world17getActiveTemplateEj_9a9ae0(unsigned int cid);
typedef const std::string& (*getfn_9a9ae0)(void*);
typedef void (*setfn_9a9ae0)(void*, const std::string&);

extern "C" std::string* dice_hfe_world_anonymous_namespace_ConsoleClass386_executeObjectMethod(char* self)
{
    // ONE return of a merged value, never a return per branch: the null edges
    // only go cold when the returned value is an SSA phi, and without that the
    // epilogue gets duplicated.
    std::string* result = 0;
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = _ZN4dice3hfe5world17getActiveTemplateEj_9a9ae0(*(unsigned int*)0x00c7ce94);
        std::string* dst = (std::string*)(self + 0x110);
        dst->assign((*(getfn_9a9ae0*)(*(char**)p + 0x320))(p));
        result = dst;
    } else if (*(int*)(self + 0x30) == 1) {
        std::string a(**(std::string**)(self + 0x38));
        unsigned int cid = *(unsigned int*)0x00c7ce94;
        *(unsigned char*)(self + 0x108) = 0;
        void* p = _ZN4dice3hfe5world17getActiveTemplateEj_9a9ae0(cid);
        (*(setfn_9a9ae0*)(*(char**)p + 0x318))(p, a);
    }
    return result;
}
