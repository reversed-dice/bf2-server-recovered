// FUNCTION: BF2 0x409d70
// BF2_FLAGS: -fcrossjumping
namespace dice {
namespace hfe {

class Mutex;
void Mutex_lock(Mutex *);
void Mutex_unlock(Mutex *);

namespace memory {

struct BlockInfo {
    unsigned int bytes;
    unsigned int count;
};

class MemoryHistogram {
public:
    static bool m_initialized;
    static unsigned int m_currentTotalBytes;
    static unsigned int m_largeBlocksCurrent;
    static BlockInfo m_blockInfo[10000];
    static void freeBlock(unsigned int blockSize);
};

extern Mutex memoryHistogramMutex;

void MemoryHistogram::freeBlock(unsigned int blockSize)
{
    Mutex_lock(&memoryHistogramMutex);
    if (!m_initialized) {
        Mutex_unlock(&memoryHistogramMutex);
        return;
    }
    m_currentTotalBytes -= blockSize;
    if (blockSize > 9999) {
        if (m_largeBlocksCurrent != 0) {
            m_largeBlocksCurrent--;
        }
    } else {
        BlockInfo *info = &m_blockInfo[blockSize];
        if (info->count != 0) {
            info->count--;
        }
    }
    Mutex_unlock(&memoryHistogramMutex);
}

} // namespace memory
} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_memory_MemoryHistogram_freeBlock_unsigned_int::dice_hfe_memory_MemoryHistogram_freeBlock_unsigned_int (0x409d70)
