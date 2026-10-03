// FUNCTION: BF2 0x5e2f90
namespace dice { namespace hfe { namespace world {
typedef void (*vf_zoom_t)(void*, int);
void fn_0x5e2f90(void* self, int zoom) {
    void* p = *(void**)((char*)self+0x2a0);
    if (!p) return;
    vf_zoom_t f = (*(vf_zoom_t**)p)[0x138/8];
    f(p, zoom);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_setZoom_int (0x5e2f90)
