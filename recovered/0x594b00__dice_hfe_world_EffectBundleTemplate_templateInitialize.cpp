// FUNCTION: BF2 0x594b00
#include <string>
typedef void* (*lookup_594b00)(void*, std::string const&);
typedef void* (*get_594b00)(void*);
typedef void  (*setflag_594b00)(void*, int);

// The lookup string is a temporary in its own scope: the target destroys it
// before the two follow-up virtual calls, not at end of function.
extern "C" void tmpl_init_594b00(void* self) {
    void* a;
    {
        lookup_594b00 fn = *(lookup_594b00*)(*(char**)self + 0x220);
        std::string s("Start");
        a = fn(self, s);
    }
    void* b = (*(get_594b00*)(*(char**)a + 0x2a0))(a);
    (*(setflag_594b00*)(*(char**)b + 0xd0))(b, 1);
    void* c = (*(get_594b00*)(*(char**)a + 0x2a0))(a);
    (*(setflag_594b00*)(*(char**)c + 0x30))(c, 1);
}
// REVERSED_FUNCTION: dice_hfe_world_EffectBundleTemplate_templateInitialize (0x594b00)
