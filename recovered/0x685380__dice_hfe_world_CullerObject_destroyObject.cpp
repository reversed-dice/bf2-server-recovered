// FUNCTION: BF2 0x685380
namespace dice { namespace hfe { namespace world {

typedef void (*vfn1)(void*, void*);
void fn_0x685380(void* self) {
    void* p = *(void**)((char*)self+8);
    void** vt = *(void***)p;
    ((vfn1)vt[0x40/8])(p, self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_CullerObject_destroyObject (0x685380)
