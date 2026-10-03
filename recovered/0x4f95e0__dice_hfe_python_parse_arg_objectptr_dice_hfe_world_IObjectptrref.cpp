// FUNCTION: BF2 0x4f95e0
namespace dice { namespace hfe { namespace python {
extern int parse_arg_ObjectToken(void*, void**);
extern void* PyErr_Occurred();
extern void PyErr_SetString(void*, const char*);
extern void* PyExc_RuntimeError;

int cb_4f95e0(void* p, void** out) {
    void* token = 0;
    if (parse_arg_ObjectToken(p, &token) != 0 || token == 0) {
        if (PyErr_Occurred() != 0)
            PyErr_SetString(PyExc_RuntimeError, "cannot parse token");
        return 1;
    }
    void* obj = *(void**)token;
    void* v = 0;
    if (obj != 0)
        v = *(void**)((char*)obj + 8);
    *out = v;
    if (v == 0) {
        PyErr_SetString(PyExc_RuntimeError, "the specified object was deleted on the engine side (use isValid() to be sure)");
        return 1;
    }
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_parse_arg_objectptr_dice_hfe_world_IObjectptrref (0x4f95e0)
