// FUNCTION: BF2 0x466410
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void* PyInt_FromLong(long);
extern void* PyString_FromString(const char*);
extern void PyTuple_SetItem(void*, int, void*);

void* cb_466410(void** out, const int* a, void** s) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(2);
    PyTuple_SetItem(t, 0, PyInt_FromLong(*a));
    PyTuple_SetItem(t, 1, PyString_FromString(*(char**)s));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_int_std_string_int_constref_std_string_constref (0x466410)
