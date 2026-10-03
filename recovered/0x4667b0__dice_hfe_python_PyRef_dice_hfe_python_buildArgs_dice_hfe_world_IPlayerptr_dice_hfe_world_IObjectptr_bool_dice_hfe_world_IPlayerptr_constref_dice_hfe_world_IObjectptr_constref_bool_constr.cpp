// FUNCTION: BF2 0x4667b0
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* PyInt_FromLong(long);
extern void* to_py_dice_hfe_world_IPlayerptr(void*);
extern void* to_py_dice_hfe_world_IObjectptr(void*);
void* cb_4667b0(void** out, void** param_2, void** param_3, bool* param_4) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(3);
    PyTuple_SetItem(t, 0, to_py_dice_hfe_world_IPlayerptr(*param_2));
    PyTuple_SetItem(t, 1, to_py_dice_hfe_world_IObjectptr(*param_3));
    PyTuple_SetItem(t, 2, PyInt_FromLong(*param_4 != false));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
