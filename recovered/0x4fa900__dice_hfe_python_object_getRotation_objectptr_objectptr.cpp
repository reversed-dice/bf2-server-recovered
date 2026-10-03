// FUNCTION: BF2 0x4fa900
namespace dice { namespace hfe { namespace python {
extern int fn_4f9680(void* obj, int idx, void** out);
extern void getRotationZXY(void* m, float* a, float* b, float* c);
extern void* to_py_Vec3(void* v);

void* cb_4fa900(void* self, void* arg) {
    void* obj = 0;
    if (fn_4f9680(arg, 0, &obj))
        return 0;
    void* m;
    if (*(void**)((char*)obj + 0x50) == 0)
        m = (*(void* (**)(void*))((char*)*(void**)obj + 0x108))(obj);
    else
        m = (*(void* (**)(void*))((char*)*(void**)obj + 0x1d0))(obj);
    float x, y, z;
    getRotationZXY(m, &x, &y, &z);
    float res[3];
    float nx = -x;
    float ny = -y;
    float nz = -z;
    res[0] = nz;
    res[1] = ny;
    res[2] = nx;
    return to_py_Vec3(res);
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_object_getRotation_objectptr_objectptr (0x4fa900)
