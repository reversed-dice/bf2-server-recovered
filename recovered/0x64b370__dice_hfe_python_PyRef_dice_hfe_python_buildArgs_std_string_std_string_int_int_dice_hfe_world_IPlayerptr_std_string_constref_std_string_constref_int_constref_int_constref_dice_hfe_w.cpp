// FUNCTION: BF2 0x64b370
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* PyString_FromString(const char*);
extern void* PyInt_FromLong(long);
extern void* to_py_4(void*);
void* cb_64b370(void** out, char** param_param_2, char** param_param_3, const int* param_param_4, const int* param_param_5, void** param_param_6) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(5);
    PyTuple_SetItem(t, 0, PyString_FromString(*param_param_2));
    PyTuple_SetItem(t, 1, PyString_FromString(*param_param_3));
    PyTuple_SetItem(t, 2, PyInt_FromLong(*param_param_4));
    PyTuple_SetItem(t, 3, PyInt_FromLong(*param_param_5));
    PyTuple_SetItem(t, 4, to_py_4(*param_param_6));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_std_string_std_string_int_int_dice_hfe_world_IPlayerptr_std_string_constref_std_string_constref_int_constref_int_constref_dice_hfe_world_IPlayerptr_constref (0x64b370)
