// FUNCTION: BF2 0x64c590
namespace dice { namespace hfe {
extern "C" long fn_0x64c590(void* self) {
    struct T24 { char pad[24]; };
    T24* b = *(T24**)self;
    T24* e = *(T24**)((char*)self+8);
    return e - b;
}
} }
// REVERSED_FUNCTION: dice_hfe_KeyParser_getNumKeyMaps_const (0x64c590)
