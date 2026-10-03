// FUNCTION: BF2 0x74c820
// unzeof
// 11 ins, 0 calls, gcc34
extern "C" {

long unzeof(long param_1)
{
    if (__builtin_expect(param_1 != 0, 0)) {
        long stream = *(long*)(param_1 + 0x120);
        if (stream != 0) {
            return *(long*)(stream + 0xb8) == 0;
        }
    }
    return 0xffffff9a;
}

}
