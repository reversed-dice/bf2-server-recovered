// FUNCTION: BF2 0x764910
#include <string>
typedef void* (*lookup_764910)(void*, std::string const&);
typedef void* (*get_764910)(void*);
typedef void  (*seti_764910)(void*, int);
typedef void  (*flags_764910)(void*, int, int);

extern "C" void init_templates_764910(void* self) {
    {
        lookup_764910 fn = *(lookup_764910*)(*(char**)self + 0x220);
        void* a = fn(self, std::string("Death"));
        (*(flags_764910*)(*(char**)a + 0x98))(a, 0x400, 0);
        void* b = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)b + 0xd0))(b, 1);
        void* c = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)c + 0x30))(c, 1);
    }
    {
        lookup_764910 fn = *(lookup_764910*)(*(char**)self + 0x220);
        void* a = fn(self, std::string("Revive"));
        (*(flags_764910*)(*(char**)a + 0x98))(a, 0x400, 0);
        void* b = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)b + 0xd0))(b, 1);
        void* c = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)c + 0x30))(c, 1);
    }
    {
        lookup_764910 fn = *(lookup_764910*)(*(char**)self + 0x220);
        void* a = fn(self, std::string("Swim"));
        (*(flags_764910*)(*(char**)a + 0x98))(a, 0x400, 0);
        void* b = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)b + 0xd0))(b, 1);
        void* c = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)c + 0x30))(c, 1);
    }
    {
        lookup_764910 fn = *(lookup_764910*)(*(char**)self + 0x220);
        void* a = fn(self, std::string("Swim_Still"));
        (*(flags_764910*)(*(char**)a + 0x98))(a, 0x400, 0);
        void* b = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)b + 0xd0))(b, 1);
        void* c = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)c + 0x30))(c, 1);
    }
    {
        lookup_764910 fn = *(lookup_764910*)(*(char**)self + 0x220);
        void* a = fn(self, std::string("Swim_Sprint"));
        (*(flags_764910*)(*(char**)a + 0x98))(a, 0x400, 0);
        void* b = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)b + 0xd0))(b, 1);
        void* c = (*(get_764910*)(*(char**)a + 0x2a0))(a);
        (*(seti_764910*)(*(char**)c + 0x30))(c, 1);
    }
}
// REVERSED_FUNCTION: dice_hfe_SoldierSound_initTemplates_dice_hfe_world_SimpleObjectTemplateptr (0x764910)
