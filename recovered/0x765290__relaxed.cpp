// FUNCTION: BF2 0x765290
namespace dice { namespace hfe {
typedef void (*vfn1f)(void*, float);
void fn_0x765180(void* self, float v) {
    void* obj = *(void**)((char*)self+0x78);
    *(float*)((char*)self+0x94) = v;
    v *= *(float*)((char*)self+0xac);
    void** vt = *(void***)obj;
    ((vfn1f)vt[0x120/8])(obj, v);
}
} }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_setVolume_float (0x765180)
