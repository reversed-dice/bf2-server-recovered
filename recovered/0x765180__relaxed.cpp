// FUNCTION: BF2 0x765180
namespace dice { namespace hfe {
typedef void (*vfn1f)(void*, float);
void fn_0x7651c0(void* self, float v) {
    void* obj = *(void**)((char*)self+0x78);
    *(float*)((char*)self+0x80) = v;
    v *= *(float*)((char*)self+0x98);
    void** vt = *(void***)obj;
    ((vfn1f)vt[0x40/8])(obj, v);
}
} }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_setPitch_float (0x7651c0)
