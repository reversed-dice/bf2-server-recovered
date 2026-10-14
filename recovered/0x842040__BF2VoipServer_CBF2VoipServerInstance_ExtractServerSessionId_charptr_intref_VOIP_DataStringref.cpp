// BF2_FLAGS: -fno-guess-branch-probability -fno-strict-aliasing
// FUNCTION: BF2 0x842040
struct SessionData {
    unsigned long long a;
    unsigned long long b;
    unsigned int c;
    unsigned char d;
    char pad[0x68 - 0x15];
    int m_68;
};
int ExtractServerSessionId(void* unused, char* data, int& pos, SessionData* out) {
    int p = pos;
    int lim = out->m_68;
    if (p >= lim) {
        int off = p - 0x14;
        pos = off;
        out->m_68 = 0x14;
        char* src = data + off;
        *(unsigned long long*)out = *(unsigned long long*)src;
        *(unsigned long long*)((char*)out + 8) = *(unsigned long long*)(src + 8);
        *(unsigned int*)((char*)out + 0x10) = *(unsigned int*)(src + 0x10);
        *(unsigned char*)((char*)out + 0x14) = 0;
        return 1;
    }
    return -1;
}
