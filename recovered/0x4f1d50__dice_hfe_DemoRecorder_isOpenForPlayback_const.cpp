// FUNCTION: BF2 0x4f1d50
namespace dice { namespace hfe {
bool cb_0x4f1d50(long param_1) {
    if (*(long*)(param_1 + 0x68) != 0 && *(char*)(param_1 + 0x79) == 0) {
        return true;
    }
    return false;
}
} }
