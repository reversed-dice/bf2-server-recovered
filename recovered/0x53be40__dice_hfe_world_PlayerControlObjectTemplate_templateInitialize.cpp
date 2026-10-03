// FUNCTION: BF2 0x53be40
#include <string>
typedef void* (*lookup_53be40)(void*, std::string const&);
typedef void* (*get_53be40)(void*);
typedef void  (*setflag_53be40)(void*, int);

// Two independent lookup blocks. Both strings are temporaries so the two
// sibling scopes get distinct stack slots (TRICK 41).
extern "C" void tmpl_init_53be40(void* self) {
    lookup_53be40 fn1 = *(lookup_53be40*)(*(char**)self + 0x220);
    void* a = fn1(self, std::string("Ambient"));
    void* b = (*(get_53be40*)(*(char**)a + 0x2a0))(a);
    (*(setflag_53be40*)(*(char**)b + 0xd0))(b, 0);
    void* c = (*(get_53be40*)(*(char**)a + 0x2a0))(a);
    (*(setflag_53be40*)(*(char**)c + 0x30))(c, 0);
    lookup_53be40 fn2 = *(lookup_53be40*)(*(char**)self + 0x220);
    void* d = fn2(self, std::string("AmbientDamaged"));
    void* e = (*(get_53be40*)(*(char**)d + 0x2a0))(d);
    (*(setflag_53be40*)(*(char**)e + 0xd0))(e, 0);
    void* f = (*(get_53be40*)(*(char**)d + 0x2a0))(d);
    (*(setflag_53be40*)(*(char**)f + 0x30))(f, 0);
}
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_templateInitialize (0x53be40)
