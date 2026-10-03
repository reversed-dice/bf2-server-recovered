// FUNCTION: BF2 0xa5e240
namespace dice { namespace hfe {
extern void* fn_69de30(int g1);
typedef float (*vfn_g)(void*);
typedef void (*vfn_s)(void*, float);
void* cb_a5e240(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_69de30(*(int*)0x00c7d090);
        float v = (*(vfn_g*)((char*)*(void**)q + 0x2c8))(q);
        char r = (char)(v != *(float*)0x00b2d910);
        *(char*)((char*)p + 0x10a) = r;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_69de30(*(int*)0x00c7d090);
    (*(vfn_s*)((char*)*(void**)q + 0x2c0))(q, (float)v);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass178_executeObjectMethod (0xa5e240)
