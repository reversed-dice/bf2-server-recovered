// FUNCTION: BF2 0x452d00
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* to_py_dice_hfe_world_IPlayerptr(void*);
extern void* PyInt_FromLong(long);
void* cb_452d00(void** out, void** param_2, const int* param_3, const int* param_4) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(3);
    PyTuple_SetItem(t, 0, to_py_dice_hfe_world_IPlayerptr(*param_2));
    PyTuple_SetItem(t, 1, PyInt_FromLong(*param_3));
    PyTuple_SetItem(t, 2, PyInt_FromLong(*param_4));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_dice_hfe_world_IPlayerptr_int_int_dice_hfe_world_IPlayerptr_constref_int_constref_int_constref (0x452d00)
