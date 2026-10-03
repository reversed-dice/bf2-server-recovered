// FUNCTION: BF2 0x5ed020
namespace dice { namespace hfe {
bool cb_0x5ed020(long param_1) {
    if (*(long*)(param_1 + 200) != *(long*)(param_1 + 0xc0) && *(char*)(param_1 + 0xa8) == 0) {
        return true;
    }
    return false;
}
} }
