// FUNCTION: BF2 0x4664c0
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void* PyInt_FromLong(long);
extern void* PyString_FromString(const char*);
extern void PyTuple_SetItem(void*, int, void*);

void* cb_4664c0(void** out, const int* a, char** s) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(2);
    PyTuple_SetItem(t, 0, PyInt_FromLong(*a));
    PyTuple_SetItem(t, 1, PyString_FromString(*s));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_int_char_constptr_int_constref_char_constptr_constref (0x4664c0)
