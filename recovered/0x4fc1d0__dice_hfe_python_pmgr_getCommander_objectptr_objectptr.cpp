// FUNCTION: BF2 0x4fc1d0
namespace dice { namespace hfe { namespace python {
extern int fn_4f8b30(void* obj, int idx, int* out);
extern void* PyInt_FromLong(long);
extern void* dice_hfe_squadManager;

void* cb_4fc1d0(void* self, void* arg) {
    int local_4;
    void* r = 0;
    if (fn_4f8b30(arg, 0, &local_4))
        return r;
    void* vtable = *(void**)dice_hfe_squadManager;
    typedef int (*fn_t)(void*, int);
    fn_t fn = *(fn_t*)((char*)vtable + 0xe0);
    int i = fn(dice_hfe_squadManager, local_4);
    return PyInt_FromLong(i);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_pmgr_getCommander_objectptr_objectptr (0x4fc1d0)
