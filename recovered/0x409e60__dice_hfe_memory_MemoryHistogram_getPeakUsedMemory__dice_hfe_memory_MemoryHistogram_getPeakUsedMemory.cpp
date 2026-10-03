// FUNCTION: BF2 0x409e60
namespace dice {
namespace hfe {

class Mutex;
void Mutex_lock(Mutex *);
void Mutex_unlock(Mutex *);

namespace memory {

class MemoryHistogram {
public:
    static unsigned int m_peakTotalBytes;
    static unsigned int getPeakUsedMemory();
};

extern Mutex memoryHistogramMutex;

unsigned int MemoryHistogram::getPeakUsedMemory()
{
    unsigned int result;
    Mutex_lock(&memoryHistogramMutex);
    result = m_peakTotalBytes;
    Mutex_unlock(&memoryHistogramMutex);
    return result;
}

} // namespace memory
} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_memory_MemoryHistogram_getPeakUsedMemory::dice_hfe_memory_MemoryHistogram_getPeakUsedMemory (0x409e60)