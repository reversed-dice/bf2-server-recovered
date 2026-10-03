// FUNCTION: BF2 0x818c60
extern long ghiRequestToConnection();
extern long ghiThrottleBufferSize;
extern void SetSockBlocking(int, int);

void ghttpSetThrottle(long param_1, int param_2) {
    long conn = ghiRequestToConnection();
    if (conn == 0) return;
    *(int*)(conn + 0x1c8) = param_2;
    if (*(int*)(conn + 0x78) != -1) {
        int size = (param_2 != 0) ? (int)ghiThrottleBufferSize : 0x2000;
        SetSockBlocking(*(int*)(conn + 0x78), size);
    }
}
