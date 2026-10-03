// FUNCTION: BF2 0x83ad40
// ArrayNth
// 10 ins, 0 calls, gcc34 - bounds-checked array element access
extern "C" {

long ArrayNth(int *param_1, int param_2)
{
    if (!(__builtin_expect(!(param_2 < 0), 0))) {
        return 0;
    }
    if (param_2 >= *param_1) {
        return 0;
    }
    return (long)(param_2 * param_1[2]) + *(long*)(param_1 + 6);
}

}
