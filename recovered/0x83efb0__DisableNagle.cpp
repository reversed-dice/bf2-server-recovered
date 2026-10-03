// FUNCTION: BF2 0x83efb0
// DisableNagle
// 12 ins, 1 call (setsockopt), gcc34
extern "C" {
extern int setsockopt(int, int, int, const void*, unsigned int);

int DisableNagle(int param_1)
{
    int val = 1;
    return setsockopt(param_1, 6, 1, &val, 4) != -1;
}

}
