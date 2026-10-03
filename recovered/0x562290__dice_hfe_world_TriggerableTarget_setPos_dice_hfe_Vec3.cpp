// FUNCTION: BF2 0x562290
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1)(void*, void*);
void fn_0x562290(void* self, void* vec3) {
    void** vt = *(void***)self;
    ((vfn1)vt[0xe0/8])(self, vec3);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TriggerableTarget_setPos_dice_hfe_Vec3 (0x562290)
