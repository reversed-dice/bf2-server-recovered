// FUNCTION: BF2 0x848370
// ExtractClientSessionId - 12 ins, 0 calls
extern "C" {

int ExtractClientSessionId(long param_1, long param_2, int *param_3, short *param_4) {
    int count = *param_3;
    if (count <= 1) {
        return -1;
    }
    int idx = count - 2;
    *param_3 = idx;
    *param_4 = *(short*)(idx + param_2);
    return 1;
}

}
