// FUNCTION: BF2 0x4c6050
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* PyInt_FromLong(long);
extern void* to_py_dice_hfe_world_IPlayerptr(void*);
void* cb_4c6050(void** out, void** param_2, void** param_3, void** param_4) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(3);
    PyTuple_SetItem(t, 0, PyInt_FromLong(*param_2 != 0));
    PyTuple_SetItem(t, 1, to_py_dice_hfe_world_IPlayerptr(*param_3));
    PyTuple_SetItem(t, 2, to_py_dice_hfe_world_IPlayerptr(*param_4));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
