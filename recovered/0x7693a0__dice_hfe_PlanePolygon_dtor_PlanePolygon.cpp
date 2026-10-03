// FUNCTION: BF2 0x7693a0
namespace dice { namespace hfe {

extern "C" void List_base_Vec2_M_clear(void*);

void fn_0x7693a0(void* self) {
    *(void**)self = (void*)0xba12d0;
    List_base_Vec2_M_clear((char*)self+8);
    *(void**)self = (void*)0xba1330;
}

} }
// REVERSED_FUNCTION: dice_hfe_PlanePolygon_dtor_PlanePolygon (0x7693a0)
