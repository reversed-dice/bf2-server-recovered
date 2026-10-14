// FUNCTION: BF2 0x409400
// BF2_FLAGS: -fno-strict-aliasing
namespace dice {
namespace hfe {
namespace memory {

struct ChunkMemoryPool {
    int m_flags;
    int m_chunkSize;
    int m_numChunks;
    void* m_field_10;
    void* m_field_18;
    void* m_memory;
    void* m_freeList;
    int m_used;
    int m_capacity;
    int m_index;
    void* m_field_40;

    void* alloc(unsigned long size, int& out);
};

struct ChunkPools {
    struct PoolHolder {
        ChunkMemoryPool* m_first;
        void* m_free;
        ChunkMemoryPool* m_pools[0x200];

        ChunkMemoryPool* getNextFreePool();
    };

    static PoolHolder** m_poolLookup;
    static int m_maxBlockSize;

    static void* allocate(unsigned long size, int& out);
};

void* ChunkPools::allocate(unsigned long size, int& out)
{
    void* result;
    if (size == 0 || size > (unsigned long)m_maxBlockSize) {
        return 0;
    }
    PoolHolder* holder = m_poolLookup[size];
    if (holder == 0) {
        return 0;
    }
    ChunkMemoryPool* pool = holder->getNextFreePool();
    if (pool != 0) {
        out = pool->m_index;
        result = pool->alloc(size, out);
    } else {
        out = 0;
        result = holder->m_first->alloc(size, out);
    }
    if (result != 0) {
        ++holder->m_first->m_flags;
    }
    return result;
}

} // namespace memory
} // namespace hfe
} // namespace dice
