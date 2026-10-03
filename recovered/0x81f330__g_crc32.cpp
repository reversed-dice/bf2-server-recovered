// FUNCTION: BF2 0x81f330
// g_crc32: simple CRC32 computation - try with signed char
int g_crc32(const char* data, int len) {
    int crc = 0;
    for (int i = 0; i < len; i++) {
        crc = (int)((unsigned int)crc * 0x9CCF9319 + data[i]);
    }
    return crc;
}
