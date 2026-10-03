// FUNCTION: BF2 0x585970
#include <string>
typedef void* (*lookup_585970)(void*, std::string const&);
typedef void* (*get_585970)(void*);
typedef void  (*setflag_585970)(void*, int);
typedef void  (*setf_585970)(void*, float);

extern "C" void init_sound_585970(void* self) {
    void* a;
    {
        lookup_585970 fn = *(lookup_585970*)(*(char**)self + 0x220);
        std::string s("RotationRpm");
        a = fn(self, s);
    }
    void* b = (*(get_585970*)(*(char**)a + 0x2a0))(a);
    (*(setflag_585970*)(*(char**)b + 0xd0))(b, 1);
    void* c = (*(get_585970*)(*(char**)a + 0x2a0))(a);
    (*(setflag_585970*)(*(char**)c + 0x30))(c, 0);
    void* d = (*(get_585970*)(*(char**)a + 0x2a0))(a);
    (*(setf_585970*)(*(char**)d + 0xb0))(d, *(float*)0x00b2f234);
}
// REVERSED_FUNCTION: dice_hfe_world_RotationalBundle_initSoundTemplates_dice_hfe_world_RotationalBundleTemplateptr (0x585970)
