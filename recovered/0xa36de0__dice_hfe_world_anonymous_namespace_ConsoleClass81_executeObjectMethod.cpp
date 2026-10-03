// FUNCTION: BF2 0xa36de0
namespace dice { namespace hfe {
extern void* fn_0x699ea0(int a);
typedef int (*vfn_g)(void*);
typedef void (*vfn_s)(void*, unsigned char);
void* cb_a36de0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_0x699ea0(*(int*)0x00c75d28);
        char v = (char)((*(vfn_g*)((char*)*(void**)q + 0x1e8))(q) != 0);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_0x699ea0(*(int*)0x00c75d28);
    (*(vfn_s*)((char*)*(void**)q + 0x1e0))(q, v);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass288_executeObjectMethod (0xa36de0)
