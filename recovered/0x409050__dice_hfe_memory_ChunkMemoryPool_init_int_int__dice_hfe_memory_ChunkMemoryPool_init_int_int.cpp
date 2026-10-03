// FUNCTION: BF2 0x409050
struct ChunkMemoryPool {
    int f0;
    int f4;
    int f8;
    int fc;
    long f10;
    long f18;
    long f20;
    long f28;
    int f30;
    int f34;
};

void ChunkMemoryPool_init(ChunkMemoryPool* p, int a, int b) {
    int rounded = a & ~3;
    int rem = a & 3;
    int mask = -(rem != 0);
    p->f8 = b;
    p->f30 = 0;
    p->f20 = 0;
    p->f28 = 0;
    int chunk = rounded + (mask & 8);
    p->f4 = chunk;
    p->f34 = b / chunk;
}
// REVERSED_FUNCTION: dice_hfe_memory_ChunkMemoryPool_init_int_int (0x409050)
