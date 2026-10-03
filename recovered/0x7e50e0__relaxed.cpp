// FUNCTION: BF2 0x7e50e0
namespace dice { namespace hfe { namespace world {

extern "C" void real_operator_delete(void*);
void fn_0x62aa60(void* self) {
    *(void**)self = (void*)0xbacad0;
    *(void**)((char*)self+8) = (void*)0xbacbb0;
    void* p = *(void**)((char*)self+0x18);
    if (p) real_operator_delete(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultZoomCompTemplate_dtor_DefaultZoomCompTemplate (0x62aa60)
