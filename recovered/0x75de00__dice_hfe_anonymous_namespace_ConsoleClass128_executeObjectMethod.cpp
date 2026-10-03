// FUNCTION: BF2 0x75de00
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* dice_hfe_world_getActiveTemplate_unsigned_int_75de00(unsigned int cid);

typedef std::string (*getfn_75de00)(void*);                  // returns BY VALUE (sret)
typedef void (*setfn_75de00)(void*, const std::string&);     // takes a const reference

struct Console_75de00 {
    char         _pad0[0x30];
    int          argCount;
    char         _pad1[0x4];
    std::string* arg0;
    char         _pad2[0xc8];
    char         hasResult;
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* eom_75de00(Console_75de00* self)
{
    // One merged return: apply_return_prediction only fires on an SSA phi.
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        void* p = dice_hfe_world_getActiveTemplate_unsigned_int_75de00(0x985fd1);
        self->result.assign((*(getfn_75de00*)(*(char**)p + 0x1f0))(p));
        // Named intermediate of another type: keeps the epilogue block under
        // copy_bb_p's 40-byte duplication limit.
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        // The class id is read before the flag store, as the target does.
        unsigned int cid = 0x985fd1;
        self->hasResult = 0;
        void* p = dice_hfe_world_getActiveTemplate_unsigned_int_75de00(cid);
        (*(setfn_75de00*)(*(char**)p + 0x1e8))(p, a);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass128_executeObjectMethod (0x75de00)
