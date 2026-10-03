// FUNCTION: BF2 0x83ef70
// SetSockBroadcast
// 12 ins, 1 call (setsockopt), gcc34
extern "C" {
extern int setsockopt(int, int, int, const void*, unsigned int);

int SetSockBroadcast(int param_1)
{
    int val = 1;
    return setsockopt(param_1, 1, 6, &val, 4) == 0;
}

}
