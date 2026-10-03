// FUNCTION: BF2 0x4fb400
extern "C" {
void* PyErr_Occurred();
void PyErr_SetString(void*, const char*);
void* PyExc_RuntimeError;
void* PyTuple_GetItem(void*, int);
int parse_arg_IObject(void*, void**);
}

int cb(void* tuple, int idx, void** out) {
    if (PyErr_Occurred()) return 1;
    if (tuple == 0) { PyErr_SetString(PyExc_RuntimeError, (const char*)0xb3ae9b); return 1; }
    void* item = PyTuple_GetItem(tuple, idx);
    if (item == 0) return 1;
    return parse_arg_IObject(item, out);
}