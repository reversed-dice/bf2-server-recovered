// FUNCTION: BF2 0xac2ac0
namespace dice { namespace hfe { namespace tool {
extern void* g_0112ee48;
typedef void* (*vfn_get)(void*);
extern void fn_up_006a6f10(void* self, void* tmpl);
void* cb_ac2ac0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 0;
        void* obj = (*(vfn_get*)((char*)*(void**)g_0112ee48 + 0x120))(g_0112ee48);
        fn_up_006a6f10((void*)0x1092d80, obj);
        return 0;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    void* obj = **(void***)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    fn_up_006a6f10((void*)0x1092d80, obj);
    return 0;
}
} } }
