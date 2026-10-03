// FUNCTION: BF2 0x7a7af0
namespace dice { namespace hfe {
bool cb_0x7a7af0(char* param_1) {
    if (*param_1 == 0 && *(long*)(param_1+0x10) != 0) {
        return false;
    }
    return true;
}
} }
