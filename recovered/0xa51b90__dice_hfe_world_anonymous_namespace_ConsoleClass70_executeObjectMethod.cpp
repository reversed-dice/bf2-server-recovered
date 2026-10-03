// FUNCTION: BF2 0xa51b90
#include <string>

void* fn_699ea0(unsigned int cid);
typedef const std::string& (*getfn)(void*, int);
typedef void (*setfn)(void*, const std::string&);

extern "C" std::string* dice_hfe_world_anonymous_namespace_ConsoleClass70_executeObjectMethod(char* self)
{
    std::string* result = 0;
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = fn_699ea0(*(unsigned int*)0x00c75d28);
        std::string* dst = (std::string*)(self + 0x110);
        dst->assign((*(getfn*)(*(char**)p + 0xb0))(p, 0));
        result = dst;
    } else if (*(int*)(self + 0x30) == 1) {
        std::string a(**(std::string**)(self + 0x38));
        unsigned int cid = *(unsigned int*)0x00c75d28;
        *(unsigned char*)(self + 0x108) = 0;
        void* p = fn_699ea0(cid);
        (*(setfn*)(*(char**)p + 0xa8))(p, a);
    }
    return result;
}
