// FUNCTION: BF2 0x40a080
#include <string.h>
namespace dice { namespace hfe { namespace memory {

extern void* memoryHistogramMutex;
struct Mutex;
void Mutex_lock(Mutex*);
void Mutex_unlock(Mutex*);

extern unsigned char m_initialized;
struct BlockInfo { unsigned int peak; unsigned int current; };
extern BlockInfo m_blockInfo[10000];

class MemoryHistogram {
 public:
    static void clear();
};

void MemoryHistogram::clear() {
    Mutex_lock((Mutex*)&memoryHistogramMutex);
    if (m_initialized) {
        memset(m_blockInfo, 0, sizeof(m_blockInfo));
        Mutex_unlock((Mutex*)&memoryHistogramMutex);
        return;
    }
    Mutex_unlock((Mutex*)&memoryHistogramMutex);
}

} } }
