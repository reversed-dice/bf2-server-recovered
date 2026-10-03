// FUNCTION: BF2 0x4d3630
namespace dice { namespace hfe {
void fn_0x4d3630(void* self) {
    char* node = (char*)self + 8;
    *(char*)self = 0;
    *(void**)((char*)self+8) = node;
    *(void**)(node+8) = node;
}
} }
// REVERSED_FUNCTION: dice_hfe_BF2Console_BF2Console (0x4d3630)
