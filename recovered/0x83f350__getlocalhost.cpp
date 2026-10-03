// FUNCTION: BF2 0x83f350
// getlocalhost: get hostname and resolve
#include <cstring>
#include <netdb.h>
extern "C" {
    extern char DAT_00bb6d30;
    int gethostname(char*, ...);
}

void getlocalhost() {
    char buf[256];
    buf[0] = DAT_00bb6d30;
    memset(buf + 1, 0, 0xff);
    gethostname(buf, 0x100);
    gethostbyname(buf);
}
// REVERSED_FUNCTION: getlocalhost (0x83f350)
