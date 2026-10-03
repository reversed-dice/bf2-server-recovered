// FUNCTION: BF2 0x551160
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* to_py_dice_hfe_world_IPlayerptr(void*);
extern void* to_py_dice_hfe_world_IObjectptr(void*);
void* cb_551160(void** out, void** param_2, void** param_3, void** param_4) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(3);
    PyTuple_SetItem(t, 0, to_py_dice_hfe_world_IPlayerptr(*param_2));
    PyTuple_SetItem(t, 1, to_py_dice_hfe_world_IObjectptr(*param_3));
    PyTuple_SetItem(t, 2, to_py_dice_hfe_world_IObjectptr(*param_4));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_dice_hfe_world_IPlayerptr_dice_hfe_world_IObjectptr_dice_hfe_world_IObjectptr_dice_hfe_world_IPlayerptr_constref_dice_hfe_world_IObjectptr_constref_dice_hfe_world_IObjectptr_constref (0x551160)
