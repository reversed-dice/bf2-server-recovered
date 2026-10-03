// FUNCTION: BF2 0x630cd0
namespace dice { namespace hfe { namespace world {
extern "C" void dice_hfe_world_RotationalBundle_disableCachedObject(void*);
extern "C" void abort() __attribute__((noreturn));
typedef void (*vfn0)(void*);
void fn_0x630cd0(void* self) {
    dice_hfe_world_RotationalBundle_disableCachedObject(self);
    void** vt = *(void***)self;
    ((vfn0)vt[0x340/8])(self);
    if (*(char*)((char*)self+0x2c9) != 0) abort();
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EngineBase_disableCachedObject (0x630cd0)
