// FUNCTION: BF2 0x4f9680
namespace dice { namespace hfe { namespace python {
extern void* PyErr_Occurred();
extern void PyErr_SetString(void*, const char*);
extern void* PyExc_RuntimeError;
extern void* PyTuple_GetItem(void*, int);
extern int parse_arg_IObject(void*, void**);

int cb_4f9680(void* tuple, int idx, void** out) {
    if (PyErr_Occurred() != 0)
        return 1;
    if (tuple == 0) {
        PyErr_SetString(PyExc_RuntimeError, "no arguments");
        return 1;
    }
    void* item = PyTuple_GetItem(tuple, idx);
    if (item == 0)
        return 1;
    return parse_arg_IObject(item, out);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_py_argo_objectptr_int_dice_hfe_world_IObjectptrref (0x4f9680)
