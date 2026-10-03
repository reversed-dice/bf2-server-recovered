// FUNCTION: BF2 0x409890
namespace dice { namespace hfe {

void Mutex_lock(void*);
void Mutex_unlock(void*);

namespace memory {

extern void* memoryHistogramMutex;
extern int MemoryHistogram_m_blockInfo[20000];

void histogramClearPeaks_impl() {
    Mutex_lock(&memoryHistogramMutex);
    for (unsigned int i = 0; i < 10000; ++i) {
        MemoryHistogram_m_blockInfo[i * 2] = 0;
    }
    Mutex_unlock(&memoryHistogramMutex);
}

void histogramClearPeaks() {
    histogramClearPeaks_impl();
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_histogramClearPeaks (0x409890)