// FUNCTION: BF2 0x409870
namespace dice { namespace hfe { namespace memory {
class MemoryHistogram;
unsigned int MemoryHistogram_getPeakTotalBytes_const();
unsigned int histogramPeakUsedMemory() { return MemoryHistogram_getPeakTotalBytes_const(); }
} } }
// REVERSED_FUNCTION: dice_hfe_memory_histogramPeakUsedMemory (0x409870)