// FUNCTION: BF2 0x83f320
// CanSendOnSocket
// 12 ins, 1 call (GSISocketSelect), gcc34
extern "C" {
extern int GSISocketSelect(long, int*, int*, int*);

int CanSendOnSocket(long param_1)
{
    int writable = 0;
    int result = GSISocketSelect(param_1, 0, &writable, 0);
    if (result == 1) {
        return writable;
    }
    return 0;
}

}
