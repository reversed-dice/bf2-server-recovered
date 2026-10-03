// FUNCTION: BF2 0x763920
#include <string>
typedef void* (*lookup_763920)(void*, std::string const&);
typedef void* (*get_763920)(void*);
typedef void  (*seti_763920)(void*, int);
typedef void  (*setf_763920)(void*, float);

extern "C" void init_templates_763920(void* self) {
    {
        lookup_763920 fn = *(lookup_763920*)(*(char**)self + 0x220);
        void* a = fn(self, std::string("Idle"));
        void* b = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)b + 0xd0))(b, 1);
        void* c = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(setf_763920*)(*(char**)c + 0xb0))(c, *(float*)0x00b3328c);
        void* d = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)d + 0x30))(d, 0);
        void* e = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)e + 0xe0))(e, 2);
    }
    {
        lookup_763920 fn = *(lookup_763920*)(*(char**)self + 0x220);
        void* a = fn(self, std::string("Rpm1"));
        void* b = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)b + 0xd0))(b, 1);
        void* c = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(setf_763920*)(*(char**)c + 0xb0))(c, *(float*)0x00b3328c);
        void* d = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)d + 0x30))(d, 0);
        void* e = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)e + 0xe0))(e, 0);
    }
    {
        lookup_763920 fn = *(lookup_763920*)(*(char**)self + 0x220);
        void* a = fn(self, std::string("Rpm2"));
        void* b = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)b + 0xd0))(b, 1);
        void* c = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(setf_763920*)(*(char**)c + 0xb0))(c, *(float*)0x00b3328c);
        void* d = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)d + 0x30))(d, 0);
        void* e = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)e + 0xe0))(e, 0);
    }
    {
        lookup_763920 fn = *(lookup_763920*)(*(char**)self + 0x220);
        void* a = fn(self, std::string("Load"));
        void* b = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)b + 0xd0))(b, 1);
        void* c = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(setf_763920*)(*(char**)c + 0xb0))(c, *(float*)0x00b2f3bc);
        void* d = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)d + 0x30))(d, 1);
        void* e = (*(get_763920*)(*(char**)a + 0x2a0))(a);
        (*(seti_763920*)(*(char**)e + 0xe0))(e, 1);
    }
}
// REVERSED_FUNCTION: dice_hfe_EngineSound_initTemplates_dice_hfe_world_EngineTemplateptr (0x763920)
