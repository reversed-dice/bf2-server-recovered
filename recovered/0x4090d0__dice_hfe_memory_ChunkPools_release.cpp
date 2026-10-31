// FUNCTION: BF2 0x4090d0
#include <stdlib.h>
namespace dice { namespace hfe { namespace memory {
class ChunkMemoryPool { public: ~ChunkMemoryPool(); int m_flags; };
class ChunkPools {
public:
    struct PoolHolder { ChunkMemoryPool* m_first; void* m_free; ChunkMemoryPool* m_pools[0x200]; };
    static PoolHolder** m_poolLookup;
    static PoolHolder* m_uniquePools;
    static int m_uniquePoolCount;
    static void release();
};
void ChunkPools::release()
{
    free(m_poolLookup);
    for (int i = 0; i < m_uniquePoolCount; ++i)
    {
        m_uniquePools[i].m_first->~ChunkMemoryPool();
        free(m_uniquePools[i].m_first);
    }
    free(m_uniquePools);
    m_uniquePoolCount = 0;
}
} } }
