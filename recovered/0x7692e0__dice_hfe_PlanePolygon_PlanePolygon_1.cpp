// FUNCTION: BF2 0x7692e0
namespace dice { namespace hfe {
void fn_0x7692e0(void* self) {
    char* p = (char*)self + 8;
    *(void**)self = (void*)0xba12d0;
    *(void**)p = p;
    *(void**)(p+8) = p;
}
} }
// REVERSED_FUNCTION: dice_hfe_PlanePolygon_PlanePolygon (0x7692e0)
