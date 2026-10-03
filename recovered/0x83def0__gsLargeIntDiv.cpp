// FUNCTION: BF2 0x83def0
// gsLargeIntDiv: rearrange parameters and jump
extern "C" {
    void gsiLargeIntDiv(void* data, int size, long a, long b, long c);
}

void gsLargeIntDiv(int* data, long a, long b, long c) {
    gsiLargeIntDiv(data + 1, *data, a, b, c);
}
