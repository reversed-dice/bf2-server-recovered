// FUNCTION: BF2 0x7651c0
namespace dice { namespace hfe {
typedef void (*vfn1f)(void*, float);
void fn_0x765180(void* self, float v) {
    void* obj = *(void**)((char*)self+0x78);
    *(float*)((char*)self+0x84) = v;
    v *= *(float*)((char*)self+0x9c);
    void** vt = *(void***)obj;
    ((vfn1f)vt[0x68/8])(obj, v);
}
} }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_setVolume_float (0x765180)
