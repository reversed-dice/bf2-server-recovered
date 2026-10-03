// FUNCTION: BF2 0x83f050
// GetReceiveBufferSize
// 11 ins, 1 call (getsockopt), gcc34
extern "C" {
extern int getsockopt(int, int, int, void*, unsigned int*);

int GetReceiveBufferSize(int param_1)
{
    int val;
    unsigned int len = 4;
    int result = getsockopt(param_1, 1, 8, &val, &len);
    if (result != -1) {
        return val;
    }
    return result;
}

}
