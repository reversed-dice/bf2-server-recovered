// FUNCTION: BF2 0x4a2290
namespace dice { namespace hfe {
bool fn_4a2290(long param_1) {
    if (*(char*)(param_1 + 0x134) != 0 && *(char*)(param_1 + 0xa9) != 0 && *(char*)(param_1 + 0xaa) != 0) {
        return true;
    }
    return false;
}
} }
