// FUNCTION: BF2 0x409e60
namespace dice {
namespace hfe {

class Mutex;
void Mutex_lock(Mutex *);
void Mutex_unlock(Mutex *);

namespace memory {

class MemoryHistogram {
public:
    static unsigned int m_currentTotalBytes;
    static unsigned int getCurrentUsedMemory();
};

extern Mutex memoryHistogramMutex;

unsigned int MemoryHistogram::getCurrentUsedMemory()
{
    unsigned int result;
    Mutex_lock(&memoryHistogramMutex);
    result = m_currentTotalBytes;
    Mutex_unlock(&memoryHistogramMutex);
    return result;
}

} // namespace memory
} // namespace hfe
} // namespace dice