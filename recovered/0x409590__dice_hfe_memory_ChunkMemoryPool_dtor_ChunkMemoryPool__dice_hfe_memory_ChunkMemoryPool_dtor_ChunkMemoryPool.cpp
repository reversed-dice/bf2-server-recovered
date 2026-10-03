// FUNCTION: BF2 0x409590
namespace dice { namespace hfe { namespace memory {

class ChunkMemoryPool {
public:
    ~ChunkMemoryPool();
private:
    unsigned char m_pad1[0x10];
    void* m_chunkHead;     // offset 0x10
    unsigned char m_pad2[0x08];
    void* m_pool;          // offset 0x20
};

void releaseChunks(void*);
void finalizeChunk(void*);

ChunkMemoryPool::~ChunkMemoryPool() {
    void* p = m_chunkHead;
    if (p) {
        releaseChunks(p);
        p = m_chunkHead;
        finalizeChunk(p);
    }
    p = m_pool;
    if (p) {
        finalizeChunk(p);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_ChunkMemoryPool_dtor_ChunkMemoryPool (0x409590)