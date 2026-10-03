// FUNCTION: BF2 0x4f70c0
namespace dice { namespace hfe { namespace python {
extern int fn_4f8b30(void* obj, int idx, int* out);
extern void* dice_hfe_eventManager;

void* cb_4f70c0(void* self, void* arg) {
    int local_c;
    if (fn_4f8b30(arg, 0, &local_c))
        return 0;
    typedef void (*fn_t)(void*, int, char, void*, float);
    fn_t fn = *(fn_t*)((char*)*(void**)dice_hfe_eventManager + 0x28);
    fn(dice_hfe_eventManager, 2, 0x3f, &local_c, 0.0f);
    (*(int*)0x00f6c850)++;
    return (void*)0xf6c850;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_sh_setEnableCommander_objectptr_objectptr (0x4f70c0)
