// FUNCTION: BF2 0x814c10
extern unsigned char enc[];

void xcode_buf(unsigned char *buf, int len) {
    if (len <= 0) return;
    unsigned char *k = enc;
    int i = 0;
    do {
        unsigned char c = *k;
        k++;
        *buf ^= c;
        if (*k == 0) k = enc;
        i++;
        buf++;
    } while (i != len);
}
