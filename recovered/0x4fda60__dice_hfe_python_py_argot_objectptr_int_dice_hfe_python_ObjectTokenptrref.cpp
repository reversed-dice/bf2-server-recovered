// FUNCTION: BF2 0x4fda60
namespace dice { namespace hfe { namespace python {
extern void* PyErr_Occurred();
extern void PyErr_SetString(void*, const char*);
extern void* PyExc_RuntimeError;
extern void* PyTuple_GetItem(void*, int);
extern int parse_arg_ObjectToken(void*, void**);

int cb_4fda60(void* tuple, int idx, void** out) {
    if (PyErr_Occurred() != 0)
        return 1;
    if (tuple == 0) {
        PyErr_SetString(PyExc_RuntimeError, "no arguments");
        return 1;
    }
    void* item = PyTuple_GetItem(tuple, idx);
    if (item == 0)
        return 1;
    return parse_arg_ObjectToken(item, out);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_py_argot_objectptr_int_dice_hfe_python_ObjectTokenptrref (0x4fda60)
