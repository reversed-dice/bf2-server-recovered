// FUNCTION: BF2 0x4f8d10
extern "C" {
    extern void* PyErr_Occurred();
    extern void PyErr_SetString(void*, const char*);
    extern void* PyTuple_GetItem(void*, int);
    extern void* PyExc_RuntimeError;
}

int int_dice_hfe_python_py_arg_objectptr_objectptr_int_objectptrref(
    void* args, int idx, void** out)
{
    if (PyErr_Occurred() != 0) {
        return 1;
    }
    if (args == 0) {
        PyErr_SetString(PyExc_RuntimeError, "no arguments");
        return 1;
    }
    void* item = PyTuple_GetItem(args, idx);
    if (item == 0) {
        return 1;
    }
    *out = item;
    return 0;
}
