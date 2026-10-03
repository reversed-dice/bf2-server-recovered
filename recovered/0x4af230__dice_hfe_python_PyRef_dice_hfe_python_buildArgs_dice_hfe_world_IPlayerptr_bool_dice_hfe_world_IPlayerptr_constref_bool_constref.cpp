// FUNCTION: BF2 0x4af230
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* to_py_0(void*);
extern void* PyInt_FromLong(long);
void* cb_4af230(void** out, void** param_param_2, char* param_param_3) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(2);
    PyTuple_SetItem(t, 0, to_py_0(*param_param_2));
    PyTuple_SetItem(t, 1, PyInt_FromLong(*param_param_3 != 0));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_dice_hfe_world_IPlayerptr_bool_dice_hfe_world_IPlayerptr_constref_bool_constref (0x4af230)
