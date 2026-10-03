// FUNCTION: BF2 0x6dccd0
// getWheelMaterials(WeakPtr<IObject> const&, int*)
// Returns wheel material count; optionally stores a material ID via virtual call.

struct IObject {
    void* vtable;
};

struct WeakPtr {
    IObject* ptr;
};

extern "C" int dice_hfe_world_getWheelMaterials(const WeakPtr* wp, int* out)
{
    IObject* obj = wp->ptr;
    if (obj != 0) {
        IObject* secondary = (IObject*)*((void**)obj + 1);
        if (secondary != 0) {
            if (out != 0) {
                void** vtable = (void**)*(void**)secondary;
                int result = ((int(*)(IObject*))vtable[0x1a0/8])(secondary);
                *out = result;
            }
            return *(int*)((char*)secondary + 0x260);
        }
    }
    if (out != 0) *out = 0;
    return -2;
}
// REVERSED_FUNCTION: dice_hfe_world_getWheelMaterials (0x6dccd0)
