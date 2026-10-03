// FUNCTION: BF2 0x8ef3b0
// 0x8ef3b0 - ConsoleClass1035_checkObj - try matching second condition
int fn_0x8ef3b0(void* self, char flag) {
    int count = *(int*)((char*)self + 0x30);
    if (__builtin_expect(count <= 0, 0)) return 0;
    int* arr = *(int**)((char*)self + 0x38);
    int val = *arr;
    if (__builtin_expect(val < -1, 0)) {
        if (flag) *arr = -1;
        return 0;
    }
    // Target: CMP EAX,3; JLE ret; flag check; store 3; return
    // My code: CMP EAX,3; JG flag_check; return
    // Need: if (val <= 3) return 0; then flag check
    if (val <= 3) return 0;
    if (flag) { *arr = 3; }
    return 0;
}
