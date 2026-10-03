// FUNCTION: BF2 0x7f1680
namespace dice { namespace hfe { namespace io {
typedef void (*vf_setactive_t)(void*, void*);
void fn_0x7f1680(void* self, void* map) {
    *(void**)((char*)self+0x60) = map;
    vf_setactive_t f = (*(vf_setactive_t**)self)[0x80/8];
    f(self, map);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_ControlMapManager_setActive_dice_hfe_io_IControlMap_constptr (0x7f1680)
