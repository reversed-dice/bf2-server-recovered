// FUNCTION: BF2 0x769250
namespace dice { namespace hfe {

extern "C" void List_base_Vec2_M_clear(void*);
extern "C" void real_operator_delete2(void*);
void fn_0x769250(void* self) {
    *(void**)self = (void*)0xba12d0;
    List_base_Vec2_M_clear((char*)self+8);
    *(void**)self = (void*)0xba1330;
    real_operator_delete2(self);
}

} }
// REVERSED_FUNCTION: dice_hfe_PlanePolygon_dtor_PlanePolygon (0x769250)
