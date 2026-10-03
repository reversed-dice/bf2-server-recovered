// FUNCTION: BF2 0x5140d0
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void* to_py_IObjectptr(void*);
extern void* PyInt_FromLong(long);
extern void PyTuple_SetItem(void*, int, void*);

void* cb_5140d0(void** out, void** o, const int* i) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(2);
    PyTuple_SetItem(t, 0, to_py_IObjectptr(*o));
    PyTuple_SetItem(t, 1, PyInt_FromLong(*i));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_dice_hfe_world_IObjectptr_int_dice_hfe_world_IObjectptr_constref_int_constref (0x5140d0)
