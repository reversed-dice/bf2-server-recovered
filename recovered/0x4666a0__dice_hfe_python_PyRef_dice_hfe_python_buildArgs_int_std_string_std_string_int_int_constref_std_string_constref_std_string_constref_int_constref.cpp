// FUNCTION: BF2 0x4666a0
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* PyInt_FromLong(long);
extern void* PyString_FromString(const char*);
void* cb_4666a0(void** out, const int* param_param_2, char** param_param_3, char** param_param_4, const int* param_param_5) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(4);
    PyTuple_SetItem(t, 0, PyInt_FromLong(*param_param_2));
    PyTuple_SetItem(t, 1, PyString_FromString(*param_param_3));
    PyTuple_SetItem(t, 2, PyString_FromString(*param_param_4));
    PyTuple_SetItem(t, 3, PyInt_FromLong(*param_param_5));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_int_std_string_std_string_int_int_constref_std_string_constref_std_string_constref_int_constref (0x4666a0)
