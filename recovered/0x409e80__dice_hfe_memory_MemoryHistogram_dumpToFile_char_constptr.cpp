// FUNCTION: BF2 0x409e80
#include <stdio.h>

namespace dice { namespace hfe {

class Mutex {
public:
    void lock();
    void unlock();
};

namespace memory {

extern Mutex memoryHistogramMutex;

class MemoryHistogram {
public:
    struct BlockInfo {
        unsigned int peak;
        unsigned int current;
    };
    static void dumpToFile(const char* fileName);
    static BlockInfo m_blockInfo[10000];
    static unsigned int m_currentTotalBytes;
    static unsigned int m_peakTotalBytes;
    static unsigned int m_largeBlocksCurrent;
    static unsigned int m_largeBlocksPeak;
    static bool m_initialized;
};

void MemoryHistogram::dumpToFile(const char* fileName)
{
    memoryHistogramMutex.lock();
    if (__builtin_expect(m_initialized, 1)) {
        FILE* f = fopen(fileName, "wt");
        if (f) {
            fprintf(f, "Allocations greater than %u bytes\n", 10000);
            fprintf(f, "Current:%u Peak:%u\n", m_largeBlocksCurrent, m_largeBlocksPeak);
            fprintf(f, "Total bytes allocated. Current:%u Peak:%u\n\n", m_currentTotalBytes, m_peakTotalBytes);
            for (unsigned int i = 0; i < 10000; ++i) {
                BlockInfo& b = m_blockInfo[i]; if (b.current != 0) fprintf(f, "Size:%u Current:%u Peak:%u\n", i, b.current, b.peak);
            }
            fprintf(f, "\nBlocks where current is zero\n\n");
            for (unsigned int i = 0; i < 10000; ++i) {
                BlockInfo& b = m_blockInfo[i]; if (b.current == 0 && b.peak != 0) fprintf(f, "Size:%u Peak:%u\n", i, b.peak);
            }
            fclose(f);
        }
    }
    memoryHistogramMutex.unlock();
}

} } }
