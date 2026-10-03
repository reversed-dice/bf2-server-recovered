// FUNCTION: BF2 0x5d1180
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn1i)(void*, int);
bool fn_0x5d1180(void* self, void* param) {
    *(void**)((char*)self+0x60) = param;
    void** vt = *(void***)self;
    void* r = ((vfn1i)vt[0x18/8])(self, *(int*)0xbc1968);
    *(void**)((char*)self+0x28) = r;
    return true;
}
} } }
// REVERSED_FUNCTION: dice_hfe_KitNetworkable_init_voidptr (0x5d1180)
