// FUNCTION: BF2 0x4b7c30
typedef void* (*vf_getmat_t)(void*, int);

namespace dice { namespace hfe { namespace world {
void* fn_0x4b7c30(void* self) {
    vf_getmat_t f = (*(vf_getmat_t**)self)[0x48/8];
    return f(self, *(int*)((char*)self+0x40));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_MaterialManager_getMaterialPtr (0x4b7c30)
