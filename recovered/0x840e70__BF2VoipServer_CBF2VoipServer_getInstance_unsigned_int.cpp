// FUNCTION: BF2 0x840e70
void* fn_0x840e70(void* self, unsigned idx) {
    unsigned long i = idx;
    void** finish = *(void***)((char*)self + 0x20);
    void** start = *(void***)((char*)self + 0x18);
    void* result = 0;
    unsigned long count = (unsigned long)(finish - start);
    if (i < count) {
        result = start[i];
    }
    return result;
}
// REVERSED_FUNCTION: BF2VoipServer_CBF2VoipServer_getInstance_unsigned_int (0x840e70)
