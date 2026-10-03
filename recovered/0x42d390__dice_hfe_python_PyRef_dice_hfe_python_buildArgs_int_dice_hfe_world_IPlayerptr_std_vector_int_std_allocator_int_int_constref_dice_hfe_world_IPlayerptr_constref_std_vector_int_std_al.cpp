// FUNCTION: BF2 0x42d390
namespace dice { namespace hfe { namespace python {
extern void* pythonHost();
extern bool isInitialized(void*);
extern void* PyTuple_New(int);
extern void PyTuple_SetItem(void*, int, void*);
extern void* PyInt_FromLong(long);
extern void* to_py_1(void*);
extern void* to_py_h2(void*);
void* cb_42d390(void** out, const int* param_param_2, void** param_param_3, void* param_4) {
    if (!isInitialized(pythonHost())) {
        *out = 0;
        return out;
    }
    void* t = PyTuple_New(3);
    PyTuple_SetItem(t, 0, PyInt_FromLong(*param_param_2));
    PyTuple_SetItem(t, 1, to_py_1(*param_param_3));
    PyTuple_SetItem(t, 2, to_py_h2(param_4));
    *out = t;
    if (t != 0 && *(int*)t == 0)
        (*(void (**)(void*))((char*)*(void**)((char*)t + 8) + 0x28))(t);
    return out;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_PyRef_dice_hfe_python_buildArgs_int_dice_hfe_world_IPlayerptr_std_vector_int_std_allocator_int_int_constref_dice_hfe_world_IPlayerptr_constref_std_vector_int_std_allocator_int_constref (0x42d390)
