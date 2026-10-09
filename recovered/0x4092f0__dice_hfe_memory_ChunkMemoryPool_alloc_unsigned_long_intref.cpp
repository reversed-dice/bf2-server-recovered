// FUNCTION: BF2 0x4092f0
// BF2_FLAGS: -fno-strict-aliasing
#include <stdlib.h>
#include <new>

namespace dice { namespace hfe { namespace memory {

class ChunkMemoryPool;

class ChunkPools {
public:
    static void internalAddNewPool(unsigned long size, int index, ChunkMemoryPool* pool);
};

class ChunkMemoryPool {
public:
    ChunkMemoryPool();
    void init(int chunkSize, int numChunks);
    void* alloc(unsigned long size, int& index);

    int m_flags;
    int m_chunkSize;
    int m_numChunks;
    ChunkMemoryPool* m_next;
    ChunkMemoryPool* m_owner;
    char* m_memory;
    void* m_freeList;
    int m_used;
    int m_capacity;
    int m_index;
    void* m_reserved;
};

void* ChunkMemoryPool::alloc(unsigned long size, int& index)
{
    m_index = index;
    int used = m_used;
    if (used < m_capacity) {
    if (m_memory == 0) {
        m_memory = (char*)malloc(m_chunkSize * m_capacity);
        int i;
        for (i = 0; i < m_capacity - 1; ++i)
            *(char**)(m_memory + i * m_chunkSize) = m_memory + (i + 1) * m_chunkSize;
        *(char**)(m_memory + (m_capacity - 1) * m_chunkSize) = 0;
        m_freeList = m_memory;
    }
    void* p = m_freeList;
    ++m_used;
    m_freeList = *(void**)p;
    return p;
    }
        ++index;
        if (m_next == 0) {
            m_next = (ChunkMemoryPool*)malloc(sizeof(ChunkMemoryPool));
            new (m_next) ChunkMemoryPool;
            m_next->init(m_chunkSize, m_numChunks);
            m_next->m_owner = this;
            ChunkPools::internalAddNewPool(size, index, m_next);
        }
        return m_next->alloc(size, index);
}

} } }
