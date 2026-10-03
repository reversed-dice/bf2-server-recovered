typedef unsigned long size_t;
extern "C" {
    extern int   dice_hfe_memory_ChunkPools_m_uniquePoolCount;
    extern int   dice_hfe_memory_ChunkPools_m_maxBlockSize;
    extern void* dice_hfe_memory_ChunkPools_m_poolLookup;
    extern long  dice_hfe_memory_ChunkPools_m_uniquePools;
    extern int   dice_hfe_memory_ChunkPoolsSizes[];
    void* malloc(size_t);
    void* _Znam(size_t);
    void  dice_hfe_memory_ChunkPools_PoolHolder_PoolHolder(long);
    void  dice_hfe_memory_ChunkMemoryPool_ChunkMemoryPool(void*);
    void  dice_hfe_memory_ChunkMemoryPool_init_int_int(void*, int, int);
    void  dice_hfe_memory_ChunkPools_internalAddNewPool_unsigned_long_int_dice_hfe_memory_ChunkMemoryPoolptr(long, int, void*);
}
#define UPC dice_hfe_memory_ChunkPools_m_uniquePoolCount
#define MBS dice_hfe_memory_ChunkPools_m_maxBlockSize
#define PL  dice_hfe_memory_ChunkPools_m_poolLookup
#define UP  dice_hfe_memory_ChunkPools_m_uniquePools
#define SZ  dice_hfe_memory_ChunkPoolsSizes

void dice_hfe_memory_ChunkPools_init(void)
{
    UPC = 0;
    MBS = 0;
    int sz = 4, count = 0, maxbs = 0;
    int *p = &SZ[0];
    do {
        if (maxbs < sz) maxbs = sz;
        sz = p[1];
        count = count + 1;
        p = p + 1;
    } while (sz != -1);
    UPC = count;
    MBS = maxbs;
    PL = malloc((size_t)((long)(maxbs + 1) << 3));
    if (-1 < MBS) {
        int i = 0;
        do {
            long li = (long)i;
            i = i + 1;
            *(long *)((long)PL + li * 8) = 0;
        } while (i <= MBS);
    }
    long n = (long)UPC;
    long base = (long)_Znam((size_t)((n << 12) + (n << 4)));
    if (n != 0) {
        long k = 0, ph = base;
        do {
            k = k + 1;
            dice_hfe_memory_ChunkPools_PoolHolder_PoolHolder(ph);
            ph = ph + 0x1010;
        } while (n != k);
    }
    UP = base;
    if (0 < UPC) {
        int lim = 0, bs = 0;
        long idx = 0, off = 0;
        do {
            long ub = UP;
            bs = SZ[idx];
            void *pv = malloc(0x48);
            long *slot = (long *)(ub + off);
            *slot = (long)pv;
            if (pv != (void *)0) dice_hfe_memory_ChunkMemoryPool_ChunkMemoryPool(pv);
            dice_hfe_memory_ChunkMemoryPool_init_int_int((void *)*slot, bs, 0x100000);
            for (; lim <= bs; lim = lim + 1)
                *(long **)((long)PL + (long)lim * 8) = slot;
            off = off + 0x1010;
            dice_hfe_memory_ChunkPools_internalAddNewPool_unsigned_long_int_dice_hfe_memory_ChunkMemoryPoolptr((long)bs, 0, (void *)*slot);
            bs = (int)idx;
            idx = idx + 1;
        } while (bs + 1 < UPC);
    }
}
