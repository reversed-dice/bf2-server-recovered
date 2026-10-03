// FUNCTION: BF2 0x620b20
#include <string>
typedef void* (*lookup_620b20)(void*, std::string const&);
typedef void* (*get_620b20)(void*);
typedef void  (*setflag_620b20)(void*, int);
typedef void  (*setf_620b20)(void*, float);
typedef void* (*push_620b20)(void*);
typedef void  (*pop_620b20)(void*, void*);

extern "C" void init_templates_620b20(void* self, void* tmpl) {
    void* otm = *(void**)0x0112ee40;
    void* saved = (*(push_620b20*)(*(char**)otm + 0xa0))(otm);
    void* a;
    {
        lookup_620b20 fn = *(lookup_620b20*)(*(char**)tmpl + 0x220);
        std::string s("Looping");
        a = fn(tmpl, s);
    }
    void* b = (*(get_620b20*)(*(char**)a + 0x2a0))(a);
    (*(setflag_620b20*)(*(char**)b + 0xd0))(b, 1);
    void* c = (*(get_620b20*)(*(char**)a + 0x2a0))(a);
    (*(setflag_620b20*)(*(char**)c + 0x30))(c, 0);
    void* d = (*(get_620b20*)(*(char**)a + 0x2a0))(a);
    (*(setf_620b20*)(*(char**)d + 0xb0))(d, *(float*)0x00b2f234);
    (*(pop_620b20*)(*(char**)*(void**)0x0112ee40 + 0xa8))(*(void**)0x0112ee40, saved);
}
// REVERSED_FUNCTION: dice_hfe_world_DefaultProjectileSoundCompTemplate_initTemplates_dice_hfe_world_SimpleObjectTemplateptr_unsigned_int (0x620b20)
