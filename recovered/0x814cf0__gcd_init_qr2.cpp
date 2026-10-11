// FUNCTION: BF2 0x814cf0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" int gcd_init_common(int port);
extern int    __GSIACResult;
extern int    sock;
extern char   valaddr[];
extern unsigned short localport;
extern char   static_qr2_rec[];
extern char   cdkey_process_buf[];

int gcd_init_qr2(char* p, int port)
{
    if (__GSIACResult != 1)
        return -1;

    if (p == 0)
        p = static_qr2_rec;

    localport = 0xffff;

    int v = *(int*)p;
    *(void**)(p + 0x100) = cdkey_process_buf;
    *(void**)(valaddr + 0) = 0;
    *(void**)(valaddr + 8) = 0;
    *(unsigned short*)(valaddr + 0) = 2;
    *(unsigned short*)(valaddr + 2) = 0xd674;
    sock = v;
    *(int*)(valaddr + 4) = *(int*)(p + 0xf4);
    return gcd_init_common(port);
}
