// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x40a0d0
#include <string.h>
namespace dice { namespace hfe { namespace memory {

extern void* memoryHistogramMutex;
struct Mutex;
void Mutex_lock(Mutex*);
void Mutex_unlock(Mutex*);

extern unsigned char m_initialized;
extern unsigned int m_currentTotalBytes;
extern unsigned int m_peakTotalBytes;
extern unsigned int m_largeBlocksCurrent;
extern unsigned int m_largeBlocksPeak;
struct BlockInfo { unsigned int peak; unsigned int current; };
extern BlockInfo m_blockInfo[10000];

class MemoryHistogram {
 public:
    static void addBlock(unsigned int size);
};

void MemoryHistogram::addBlock(unsigned int size) {
    Mutex_lock((Mutex*)&memoryHistogramMutex);
    if (!m_initialized) {
        m_initialized = 1;
        memset(m_blockInfo, 0, sizeof(m_blockInfo));
    }
    m_currentTotalBytes += size;
    if (m_peakTotalBytes < m_currentTotalBytes) {
        m_peakTotalBytes = m_currentTotalBytes;
    }
    if (size >= 10000) {
        m_largeBlocksCurrent++;
        if (m_largeBlocksCurrent > m_largeBlocksPeak) {
            m_largeBlocksPeak = m_largeBlocksCurrent;
            Mutex_unlock((Mutex*)&memoryHistogramMutex);
            return;
        }
        Mutex_unlock((Mutex*)&memoryHistogramMutex);
        return;
    }
    BlockInfo* b = &m_blockInfo[size];
    b->current++;
    if (b->current > b->peak) {
        b->peak = b->current;
        Mutex_unlock((Mutex*)&memoryHistogramMutex);
        return;
    }
    Mutex_unlock((Mutex*)&memoryHistogramMutex);
}

} } }
