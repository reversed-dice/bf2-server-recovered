// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4095d0

#include <stdlib.h>
#include <new>

namespace dice { namespace hfe { namespace memory {

const int ChunkPoolsSizes[] = { 4, 8, 12, 16, 20, 24, 28, 32, 48, 58, 64, 68, 72, 76, 80, 84, 88, -1 };

class ChunkMemoryPool {
public:
    ChunkMemoryPool();
    void init(int chunkSize, int numChunks);
};

class ChunkPools {
public:
    struct PoolHolder {
        PoolHolder();
        ChunkMemoryPool* m_first;
        void* m_free;
        ChunkMemoryPool* m_pools[0x200];
    };
    static void init();
    static void pad0();
    static void internalAddNewPool(unsigned long size, int index, ChunkMemoryPool* pool);
    static PoolHolder** m_poolLookup;
    static PoolHolder* m_uniquePools;
    static int m_uniquePoolCount;
    static int m_maxBlockSize;
    void px0();
    void px1();
    void px2();
    void px3();
    void px4();
    void px5();
    void px6();
    void px7();
    void px8();
    void px9();
    void px10();
    void px11();
    void px12();
};

void ChunkPools::pad0()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}

void ChunkPools::px0()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px1()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px2()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px3()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px4()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px5()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px6()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px7()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px8()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px9()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px10()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::px11()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}
void ChunkPools::init()
{
    m_maxBlockSize = 0;
    m_uniquePoolCount = 0;
    for (int i = 0; ChunkPoolsSizes[i] != -1; ++i) {
        if (ChunkPoolsSizes[i] > m_maxBlockSize)
            m_maxBlockSize = ChunkPoolsSizes[i];
        ++m_uniquePoolCount;
    }
    m_poolLookup = (PoolHolder**)malloc((m_maxBlockSize + 1) * sizeof(PoolHolder*));
    for (int i = 0; i <= m_maxBlockSize; ++i)
        m_poolLookup[i] = 0;
    m_uniquePools = new PoolHolder[m_uniquePoolCount];
    int j = 0;
    for (int i = 0; i < m_uniquePoolCount; ++i) {
        int size = ChunkPoolsSizes[i];
        PoolHolder* holder = &m_uniquePools[i];
        holder->m_first = (ChunkMemoryPool*)malloc(0x48);
        new (holder->m_first) ChunkMemoryPool;
        holder->m_first->init(size, 0x100000);
        for (; j <= size; ++j)
            m_poolLookup[j] = holder;
        internalAddNewPool(size, 0, holder->m_first);
    }
}

} } }
