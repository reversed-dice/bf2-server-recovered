// FUNCTION: BF2 0x48dd40
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* to_py_0(void*);
extern void* to_py_1(void*);
extern void* to_py_2(void*);
extern void* to_py_h3(void*);
extern void* to_py_4(void*);
void* cb_48dd40(void** out, void** param_param_2, void** param_param_3, void** param_param_4, void* param_5, void** param_param_6) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(5);
    PyTuple_SetItem(t, 0, to_py_0(*param_param_2));
    PyTuple_SetItem(t, 1, to_py_1(*param_param_3));
    PyTuple_SetItem(t, 2, to_py_2(*param_param_4));
    PyTuple_SetItem(t, 3, to_py_h3(param_5));
    PyTuple_SetItem(t, 4, to_py_4(*param_param_6));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_dice_hfe_world_IPlayerptr_dice_hfe_world_IPlayerptr_dice_hfe_world_IObjectptr_std_map_dice_hfe_world_IPlayerptr_int_std_less_dice_hfe_world_IPlayerptr_std_allocator_std_pair_dice_hfe_world_IPlayerptr_const_int_dice_hfe_world_IObjectptr_dice_hfe_world_IPlayerptr_constref_dice_hfe_world_IPlayerptr_constref_dice_hfe_world_IObjectptr_constref_std_map_dice_hfe_world_IPlayerptr_int_std_less_dice_hfe_world_IPlayerptr_std_allocator_std_pair_dice_hfe_world_IPlayerptr_const_int_constref_dice_hfe_world_IObjectptr_constref (0x48dd40)
