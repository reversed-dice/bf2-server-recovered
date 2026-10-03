// FUNCTION: BF2 0x4fc260
namespace dice { namespace hfe { namespace python {
extern int fn_4f8b30(void* obj, int idx, int* out);
void* cb_4fc260(void* self, void* arg) {
    int local_4;
    if (fn_4f8b30(arg, 0, &local_4))
        return 0;
    *(char*)0x00f66e60 = (local_4 > 0);
    (*(int*)0x00f6c850)++;
    return (void*)0xf6c850;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_pmgr_enableScoreEvents_objectptr_objectptr (0x4fc260)
