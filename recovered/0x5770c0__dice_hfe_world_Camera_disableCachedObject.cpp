// FUNCTION: BF2 0x5770c0
namespace dice { namespace hfe { namespace world {

typedef void (*vfn1)(void*, int);
extern "C" void RotationalBundle_disableCachedObject(void*);
void fn_0x5770c0(void* self) {
    void** vt = *(void***)self;
    ((vfn1)vt[0x408/8])(self, 1);
    RotationalBundle_disableCachedObject(self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_disableCachedObject (0x5770c0)
