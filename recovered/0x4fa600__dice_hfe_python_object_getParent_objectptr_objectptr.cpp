// FUNCTION: BF2 0x4fa600
namespace dice { namespace hfe { namespace python {
extern int fn_4f9680(void* a, int b, void** out);
extern void* fn_4f9480(void* p);
void* cb_4fa600(void* self, void* arg) {
    void* out = 0;
    if (fn_4f9680(arg, 0, &out))
        return 0;
    return fn_4f9480(*(void**)((char*)out + 0x50));
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_object_getParent_objectptr_objectptr (0x4fa600)
