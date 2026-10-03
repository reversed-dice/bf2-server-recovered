// FUNCTION: BF2 0x4a4640
namespace dice { namespace hfe {
void fn_4a4640(long param_1, unsigned param_2, unsigned param_3) {
    if (param_2 - 1U > 1) {
        return;
    }
    *(unsigned*)(param_1 + 0x4d8 + (unsigned long)(param_2 - 1U) * 4) = param_3;
}
} }
