// FUNCTION: BF2 0x64b640
namespace dice { namespace hfe { namespace world {
bool get_0x64b640(void* p) {
    if (*(unsigned char*)((char*)p + 0x9) == 0) {
        if (*(unsigned char*)((char*)p + 0x8) == 0) return false;
    }
    return true;
}
} } }
// REVERSED_FUNCTION: dice_hfe_HTTPRequest_isUpdating (0x64b640)
