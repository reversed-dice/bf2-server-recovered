// FUNCTION: BF2 0x510720
namespace dice { namespace hfe { namespace world {
void fn_510720(long param_1, unsigned param_2, unsigned char param_3) {
    if (param_2 - 1U > 1) {
        return;
    }
    *(unsigned char*)((long)(int)(param_2 - 1U) + 0x288 + param_1) = param_3;
}
} } }
