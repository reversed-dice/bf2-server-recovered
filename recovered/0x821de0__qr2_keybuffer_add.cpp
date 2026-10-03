// FUNCTION: BF2 0x821de0
// qr2_keybuffer_add
// 14 ins, 0 calls, gcc34
extern "C" {

int qr2_keybuffer_add(long param_1, int param_2)
{
    int pos = *(int*)(param_1 + 0x100);
    if (pos < 0xfe && (unsigned int)(param_2 - 1) < 0xfe) {
        *(char*)(param_1 + pos) = (char)param_2;
        *(int*)(param_1 + 0x100) = pos + 1;
        return 1;
    }
    return 0;
}

}
