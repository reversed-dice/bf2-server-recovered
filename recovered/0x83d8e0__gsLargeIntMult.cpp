// FUNCTION: BF2 0x83d8e0
// gsLargeIntMult: multiply two large integers
extern "C" {
    int gsiLargeIntMult(void* a, int a_len, void* b, int b_len, void* result, long result_len, int max);
    void memset(void* s, int c, unsigned long n);
}

int gsLargeIntMult(int* a, int* b, void* result) {
    int ret = gsiLargeIntMult(a + 1, *a, b + 1, *b, (char*)result + 4, (long)result, 0x100);
    if (ret == 0) {
        memset(result, 0, 0x404);
    }
    return ret;
}
