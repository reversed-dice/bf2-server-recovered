// FUNCTION: BF2 0x765200
namespace dice { namespace hfe {
typedef void (*vfn1f)(void*, float);
void fn_0x765200(void* self, float v) {
    void* obj = *(void**)((char*)self+0x78);
    *(float*)((char*)self+0x88) = v;
    v *= *(float*)((char*)self+0xa0);
    void** vt = *(void***)obj;
    ((vfn1f)vt[0xb0/8])(obj, v);
}
} }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_setMinDistance_float (0x765200)
