// FUNCTION: BF2 0x64f9b0
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* PyInt_FromLong(long);
extern void* to_py_1(void*);
extern void* PyString_FromString(const char*);
void* cb_64f9b0(void** out, const int* param_param_2, void** param_param_3, char** param_None) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(3);
    PyTuple_SetItem(t, 0, PyInt_FromLong(*param_param_2));
    PyTuple_SetItem(t, 1, to_py_1(*param_param_3));
    PyTuple_SetItem(t, 2, PyString_FromString(*param_None));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_int_dice_hfe_world_IPlayerptr_std_string_int_constref_dice_hfe_world_IPlayerptr_constref_std_string_constref (0x64f9b0)
