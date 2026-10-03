// FUNCTION: BF2 0x501d00
namespace dice { namespace hfe { namespace python {
extern int fn_4f8d10(void* obj, int idx, void** out);
extern void* pythonHost();
extern void removeTimer(void*, void*);

void* cb_501d00(void* self, void* arg) {
    void* t = 0;
    if (fn_4f8d10(arg, 0, &t))
        return 0;
    removeTimer(pythonHost(), t);
    (*(int*)0x00f6c850)++;
    return (void*)0xf6c850;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_timer_destroy_objectptr_objectptr (0x501d00)
