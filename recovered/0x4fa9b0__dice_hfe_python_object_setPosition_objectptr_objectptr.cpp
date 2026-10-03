// FUNCTION: BF2 0x4fa9b0
namespace dice { namespace hfe { namespace python {
extern int fn_4f9680(void* a, int b, void** out);
extern int fn_4fada0(void* a, int b, float* vec);
typedef void (*vfn_e0)(void*, float*);
void* cb_4fa9b0(void* self, void* arg) {
    void* out;
    float vec[3] = {0, 0, 0};
    if (fn_4f9680(arg, 0, &out) + fn_4fada0(arg, 1, vec))
        return 0;
    (*(vfn_e0*)((char*)*(void**)out + 0xe0))(out, vec);
    (*(int*)0x00f6c850)++;
    return (void*)0xf6c850;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_object_setPosition_objectptr_objectptr (0x4fa9b0)
