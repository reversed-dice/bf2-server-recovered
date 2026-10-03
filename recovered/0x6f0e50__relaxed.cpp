// FUNCTION: BF2 0x6f0e50
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn0r)(void*);
void* fn_0x6d7a50(void* self) {
    if (*(char*)((char*)self+0x10c) != 0) {
        void* m = *(void**)((char*)self+0x18);
        void** vt = *(void***)m;
        return ((vfn0r)vt[0x108/8])(m);
    }
    return (char*)self+0xcc;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_getPrevTransformation_const (0x6d7a50)
