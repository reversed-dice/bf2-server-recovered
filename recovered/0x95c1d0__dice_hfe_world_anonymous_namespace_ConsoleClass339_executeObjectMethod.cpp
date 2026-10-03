// FUNCTION: BF2 0x95c1d0
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* dice_hfe_world_getActiveTemplate_unsigned_int_95c1d0(unsigned int cid);

struct Tmpl_95c1d0 {
    char        _pad0[0x290];
    std::string name;
};

struct Console_95c1d0 {
    char         _pad0[0x30];
    int          argCount;
    char         _pad1[0x4];
    std::string* arg0;
    char         _pad2[0xc8];
    char         hasResult;
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* eom_95c1d0(Console_95c1d0* self)
{
    // One merged return: apply_return_prediction only fires on an SSA phi.
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Tmpl_95c1d0* t = (Tmpl_95c1d0*)dice_hfe_world_getActiveTemplate_unsigned_int_95c1d0(*(unsigned int*)0x00c7d02c);
        self->result.assign(t->name);
        // Named intermediate of another type: stops ret coalescing with the
        // field pointer, which keeps the epilogue block under 40 bytes.
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        // The class id is read before the flag store, as the target does.
        unsigned int cid = *(unsigned int*)0x00c7d02c;
        self->hasResult = 0;
        Tmpl_95c1d0* t = (Tmpl_95c1d0*)dice_hfe_world_getActiveTemplate_unsigned_int_95c1d0(cid);
        t->name.assign(a);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass339_executeObjectMethod (0x95c1d0)
