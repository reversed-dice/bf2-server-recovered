// FUNCTION: BF2 0x4fa590
namespace dice { namespace hfe { namespace python {
extern int fn_4f9680(void* a, int b, void** out);
typedef float (*vfn_78)(void*);
extern void* fn_4084d8(double d);
void* cb_4fa590(void* self, void* arg) {
    void* out = 0;
    if (fn_4f9680(arg, 0, &out))
        return 0;
    void* q = *(void**)((char*)out + 0x78);
    if (q == 0) {
        (*(int*)0x00f6c850)++;
        return (void*)0xf6c850;
    }
    return fn_4084d8((double)(*(vfn_78*)((char*)*(void**)q + 0x78))(q));
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_object_getDamage_objectptr_objectptr (0x4fa590)
