// FUNCTION: BF2 0x4094b0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace memory {

void memoryError(bool fatal, const char* msg);

class ChunkMemoryPool {
public:
    void directFree(void* p);
};

class ChunkPools {
public:
    struct PoolHolder {
        int* m_count;
        void* m_free;
        ChunkMemoryPool* m_pools[0x200];
        void addFreePoolLink(ChunkMemoryPool* pool);
    };
    static bool free(void* p, unsigned long size, int index);
    static PoolHolder** m_poolLookup;
};

bool ChunkPools::free(void* p, unsigned long size, int index)
{
    PoolHolder* holder = m_poolLookup[size];
    if (holder != 0) {
        if ((unsigned int)index < 0x200) {
            ChunkMemoryPool* pool = holder->m_pools[index];
            if (pool != 0) {
                pool->directFree(p);
                --*m_poolLookup[size]->m_count;
                m_poolLookup[size]->addFreePoolLink(pool);
                return true;
            }
        }
    }
    memoryError(false, "memory.dll: chunkPools::free fails, should not come here!");
    return false;
}

} } }
