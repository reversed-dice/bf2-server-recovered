// FUNCTION: BF2 0x686fd0
namespace dice { namespace hfe { namespace world {

typedef void (*vfn1)(void*, void*);
void fn_0x686fd0(void* self, void* obj) {
    void* p = *(void**)((char*)self+0x58);
    if (!p) {
        *(void**)((char*)self+0x58) = obj;
        return;
    }
    void** vt = *(void***)p;
    ((vfn1)vt[0x2b8/8])(p, obj);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_addSibling_dice_hfe_world_IObjectptr (0x686fd0)
