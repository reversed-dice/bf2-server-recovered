// FUNCTION: BF2 0x807c10
void gs_xcode_buf(unsigned char *buf, int len, unsigned char *key) {
    if (len <= 0) return;
    int i = 0;
    unsigned char *k = key;
    do {
        unsigned char c = *k;
        k++;
        *buf ^= c;
        if (*k == 0) k = key;
        i++;
        buf++;
    } while (i != len);
}
