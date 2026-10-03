// FUNCTION: BF2 0x83f2f0
// CanReceiveOnSocket
// 12 ins, 1 call (GSISocketSelect), gcc34
extern "C" {
extern int GSISocketSelect(long, int*, int*, int*);

int CanReceiveOnSocket(long param_1)
{
    int readable = 0;
    int result = GSISocketSelect(param_1, &readable, 0, 0);
    if (result == 1) {
        return readable;
    }
    return 0;
}

}
