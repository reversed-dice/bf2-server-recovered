// FUNCTION: BF2 0x8296b0
// gpIsConnected
// 15 ins, 0 calls, gcc34
extern "C" {

int gpIsConnected(long *param_1, int *param_2)
{
    if (__builtin_expect(param_1 == 0 || *param_1 == 0, 0)) {
        return 2;
    }
    if (*(int*)(*param_1 + 0x23c) != 3) {
        *param_2 = 0;
        return 0;
    }
    *param_2 = 1;
    return 0;
}

}
