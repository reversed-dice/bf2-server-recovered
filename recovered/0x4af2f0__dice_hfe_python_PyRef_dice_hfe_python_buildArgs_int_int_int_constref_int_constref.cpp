// FUNCTION: BF2 0x4af2f0
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void* PyInt_FromLong(long);
extern void PyTuple_SetItem(void*, int, void*);

void* cb_4af2f0(void** out, const int* a, const int* b) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(2);
    PyTuple_SetItem(t, 0, PyInt_FromLong(*a));
    PyTuple_SetItem(t, 1, PyInt_FromLong(*b));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_int_int_int_constref_int_constref (0x4af2f0)
