// FUNCTION: BF2 0x74d100
extern void unzCloseCurrentFile();
extern void free(long);

long unzClose(long param_1) {
    if (param_1 == 0) return 0xffffff9a;
    if (__builtin_expect(*(long*)(param_1 + 0x120) != 0, 1)) {
        unzCloseCurrentFile();
    }
    void (*fn)(long, long) = *(void(**)(long, long))(param_1 + 0x28);
    fn(*(long*)(param_1 + 0x38), *(long*)(param_1 + 0x40));
    free(param_1);
    return 0;
}
