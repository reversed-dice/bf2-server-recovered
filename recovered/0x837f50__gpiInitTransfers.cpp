// FUNCTION: BF2 0x837f50
extern "C" void* ArrayNew(int size, int count, void* freefn);
extern "C" void gpiSetErrorString(void* conn, const char* msg);
extern "C" void gpiTransferFree(void);

extern "C" int gpiInitTransfers(void* conn)
{
    char* c = (char*)*(void**)conn;
    int ret = 0;
    void* arr = ArrayNew(0x60, 0, (void*)gpiTransferFree);
    *(void**)(c + 0x508) = arr;
    if (arr == 0) {
        gpiSetErrorString(conn, "Out of memory.");
        ret = 1;
    }
    return ret;
}
