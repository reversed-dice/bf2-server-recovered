// FUNCTION: BF2 0x4faa90
namespace dice { namespace hfe { namespace python {
extern int fn_4fb400(void* obj, int idx, void** out);
extern void* PyInt_FromLong(long);

void* cb_4faa90(void* self, void* arg) {
    void* token = 0;
    if (fn_4fb400(arg, 0, &token))
        return 0;
    void* t = *(void**)token;
    long valid;
    if (t != 0 && *(void**)((char*)t + 8) != 0)
        valid = 1;
    else
        valid = 0;
    return PyInt_FromLong(valid);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_object_isValid_objectptr_objectptr (0x4faa90)
