// FUNCTION: BF2 0x81c050
// BF2_COMPILER: 3.4
extern "C" int close(int fd);
extern "C" void SocketShutDown(...);
extern "C" void ArrayFree(void* array);
extern "C" int piInitialized;
extern "C" int piSettingData;
extern "C" int piSocket;
extern "C" void* piActivePingList;
extern "C" void* piCallbacks;

extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
void pingerShutdown(void)
{
    if (!piInitialized)
        return;
    if (piSettingData)
        return;
    if (piSocket != -1) {
        close(piSocket);
        piSocket = -1;
    }
    SocketShutDown();
    ArrayFree(piActivePingList);
    ArrayFree(piCallbacks);
    piInitialized = 0;
}
