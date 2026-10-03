// FUNCTION: BF2 0x4f9570
namespace dice { namespace hfe { namespace python {
extern void* PyObject_GetAttrString(void*, const char*);
extern void* PyCObject_AsVoidPtr(void*);
extern void* PyErr_Occurred();
extern void PyErr_SetString(void*, const char*);
extern void* PyCObject_Type;
extern void* PyExc_RuntimeError;

bool cb_4f9570(void* p, void** out) {
    void* attr = PyObject_GetAttrString(p, "token");
    if (attr != 0 && *(void**)((char*)attr + 8) == (void*)0xf6d140) {
        void* vp = PyCObject_AsVoidPtr(attr);
        *out = vp;
        if (vp == 0)
            PyErr_SetString(PyExc_RuntimeError, "broken token");
        return PyErr_Occurred() != 0;
    }
    PyErr_SetString(PyExc_RuntimeError, "the token attribute is missing or not a PyCObject");
    return true;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_parse_arg_objectptr_dice_hfe_python_ObjectTokenptrref (0x4f9570)
