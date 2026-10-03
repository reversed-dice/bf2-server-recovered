// FUNCTION: BF2 0x5aef20
namespace dice { namespace hfe {
void cb_0x5aef20(long param_1, int param_2) {
    if (*(char*)(param_1 + 0x25) == 0) {
        *(int*)(param_1 + 0x2c) = param_2;
        if (param_2 < 0x10) {
            *(int*)(param_1 + 0x30) = param_2;
        }
        if (param_2 == 1) {
            *(char*)(param_1 + 0x75) = 1;
            return;
        }
    }
}
} }
