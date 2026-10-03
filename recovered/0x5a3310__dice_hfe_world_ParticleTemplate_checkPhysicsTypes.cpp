// FUNCTION: BF2 0x5a3310
namespace dice { namespace hfe {
void cb_0x5a3310(long param_1) {
    if (*(char*)(param_1 + 0x98) != 0) {
        *(int*)(param_1 + 0x9c) = 1;
        return;
    }
    if (*(char*)(param_1 + 0x99) == 0) {
        if (*(char*)(param_1 + 0x9a) != 0) {
            *(int*)(param_1 + 0x9c) = 3;
        }
        return;
    }
    *(int*)(param_1 + 0x9c) = 2;
}
} }
