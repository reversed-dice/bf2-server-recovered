// FUNCTION: BF2 0xa0ffd0
#include <string>

namespace dice { namespace hfe {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveTemplate_a0ffd0(unsigned int cid);

typedef const std::string& (*getfn_a0ffd0)(void*);
typedef void (*setfn_a0ffd0)(void*, const std::string&);

std::string* executeObjectMethod_a0ffd0(char* self)
{
    // ONE return of a merged value, never a return per branch:
    // apply_return_prediction (predict.c) bails unless the returned value is
    // an SSA PHI, so with separate returns PRED_NULL_RETURN never fires, the
    // null edges never go cold and bb-reorder never duplicates the epilogue.
    std::string* result = 0;
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = getActiveTemplate_a0ffd0(*(unsigned int*)0x00c7d080);
        std::string* dst = (std::string*)(self + 0x110);
        dst->assign((*(getfn_a0ffd0*)(*(char**)p + 0x1d8))(p));
        result = dst;
    } else if (*(int*)(self + 0x30) == 1) {
        std::string a(**(std::string**)(self + 0x38));
        unsigned int cid = *(unsigned int*)0x00c7d080;
        *(unsigned char*)(self + 0x108) = 0;
        void* p = getActiveTemplate_a0ffd0(cid);
        (*(setfn_a0ffd0*)(*(char**)p + 0x1d0))(p, a);
    }
    return result;
}

} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass166_executeObjectMethod (0xa0ffd0)
