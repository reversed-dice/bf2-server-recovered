
// FUNCTION: BF2 0x83edd0
extern "C" unsigned long strlen(const char*);
extern "C" int sscanf(const char*, const char*, ...);

int gsLargeIntSetFromHexString(int* lInt, const char* hex) {
    unsigned char* p = (unsigned char*)(lInt + 1);
    int len = (int)strlen(hex);
    if ((unsigned int)(len / 2) > 0x400) return 0;
    unsigned long n = (unsigned long)(len + 7);
    lInt[0] = (int)(n >> 3);

    unsigned int idx = (unsigned int)lInt[0] - 1;
    ((unsigned int *)(lInt + 1))[idx] = 0;
    int c;
    while (len > 0) {
        sscanf(hex + len - 2, "%02x", &c);
        *p++ = (unsigned char)c;
        len -= 2;
    }
    return 1;
}
