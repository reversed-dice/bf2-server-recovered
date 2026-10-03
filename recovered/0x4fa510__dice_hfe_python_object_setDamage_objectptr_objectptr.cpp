// FUNCTION: BF2 0x4fa510
namespace dice { namespace hfe { namespace python {
extern int fn_4f9680(void* a, int b, void** out);
extern int fn_4f8bf0(void* a, int b, double* out);
typedef void (*vfn_70)(void*, float);
void* cb_4fa510(void* self, void* arg) {
    void* out = 0;
    double d = 0;
    if (fn_4f9680(arg, 0, &out) + fn_4f8bf0(arg, 1, &d))
        return 0;
    void* q = *(void**)((char*)out + 0x78);
    if (q != 0)
        (*(vfn_70*)((char*)*(void**)q + 0x70))(q, (float)d);
    (*(int*)0x00f6c850)++;
    return (void*)0xf6c850;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_object_setDamage_objectptr_objectptr (0x4fa510)
