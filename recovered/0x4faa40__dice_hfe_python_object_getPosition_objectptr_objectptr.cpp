// FUNCTION: BF2 0x4faa40
namespace dice { namespace hfe { namespace python {
extern int fn_4f9680(void* obj, int idx, void** out);
extern void* to_py_Vec3(void* v);

void* cb_4faa40(void* self, void* arg) {
    void* obj = 0;
    if (fn_4f9680(arg, 0, &obj))
        return 0;
    typedef void* (*fn_t)(void*);
    fn_t fn = *(fn_t*)((char*)*(void**)obj + 0xd8);
    void* v = fn(obj);
    return to_py_Vec3(v);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_object_getPosition_objectptr_objectptr (0x4faa40)
