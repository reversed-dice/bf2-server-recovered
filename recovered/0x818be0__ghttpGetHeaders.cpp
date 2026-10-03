// FUNCTION: BF2 0x818be0
// BF2_FLAGS: -fno-guess-branch-probability
extern long ghiRequestToConnection();

long ghttpGetHeaders() {
    long conn = ghiRequestToConnection();
    if (conn == 0) return 0;
    if (*(unsigned int*)(conn + 0x10) <= 6) return 0;
    int offset = *(int*)(conn + 0x184);
    if (offset >= *(int*)(conn + 0xf4)) return 0;
    return (long)offset + *(long*)(conn + 0xe8);
}
