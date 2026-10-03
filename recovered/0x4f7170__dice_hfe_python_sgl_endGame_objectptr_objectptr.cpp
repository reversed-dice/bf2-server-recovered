// FUNCTION: BF2 0x4f7170
namespace dice { namespace hfe { namespace python {
extern int fn_4f8b30(void* obj, int idx, int* out);
extern void* dice_hfe_gameLogic;
extern void endGame(void*, unsigned int, int);

void* cb_4f7170(void* self, void* arg) {
    int a, b;
    int r1 = fn_4f8b30(arg, 0, &a);
    int r2 = fn_4f8b30(arg, 1, &b);
    if (r1 + r2 != 0)
        return 0;
    endGame(dice_hfe_gameLogic, a, b);
    (*(int*)0x00f6c850)++;
    return (void*)0xf6c850;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_sgl_endGame_objectptr_objectptr (0x4f7170)
