// FUNCTION: BF2 0x768210
#include <string>
typedef void* (*lookup_768210)(void*, std::string const&);
typedef void* (*get_768210)(void*);
typedef void  (*setflag_768210)(void*, int);

// The lookup string is a temporary in its own scope: the target destroys it
// before the two follow-up virtual calls, not at end of function.
extern "C" void tmpl_init_768210(void* self) {
    void* a;
    {
        lookup_768210 fn = *(lookup_768210*)(*(char**)self + 0x220);
        std::string s("Rotation");
        a = fn(self, s);
    }
    void* b = (*(get_768210*)(*(char**)a + 0x2a0))(a);
    (*(setflag_768210*)(*(char**)b + 0xd0))(b, 1);
    void* c = (*(get_768210*)(*(char**)a + 0x2a0))(a);
    (*(setflag_768210*)(*(char**)c + 0x30))(c, 0);
}
// REVERSED_FUNCTION: dice_hfe_WheelSound_initTemplates_dice_hfe_world_SpringTemplateptr_unsigned_int (0x768210)
