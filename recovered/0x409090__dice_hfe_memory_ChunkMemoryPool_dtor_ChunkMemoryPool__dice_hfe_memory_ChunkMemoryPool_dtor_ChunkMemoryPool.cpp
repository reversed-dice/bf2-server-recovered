// FUNCTION: BF2 0x409090
#include <stdlib.h>

namespace dice { namespace hfe { namespace memory {

class ChunkMemoryPool {
public:
    ~ChunkMemoryPool();
private:
    char ___pad_0x00[0x10];
public:
    void* m_chunkHead;   // +0x10
private:
    char ___pad_0x18[8];
public:
    void* m_pool;        // +0x20
};

} } }

namespace dice { namespace hfe { namespace memory {

ChunkMemoryPool::~ChunkMemoryPool() {
    if (__builtin_expect(m_chunkHead != 0, 1)) {
        reinterpret_cast<ChunkMemoryPool*>(m_chunkHead)->~ChunkMemoryPool();
        free(m_chunkHead);
    }
    if (__builtin_expect(m_pool != 0, 1)) {
        free(m_pool);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_ChunkMemoryPool_dtor_ChunkMemoryPool (0x409090)