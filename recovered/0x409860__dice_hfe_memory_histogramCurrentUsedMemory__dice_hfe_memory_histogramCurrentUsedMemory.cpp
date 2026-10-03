// FUNCTION: BF2 0x409860
namespace dice { namespace hfe { namespace memory {

unsigned int histogramCurrentUsedMemoryImpl();

unsigned int histogramCurrentUsedMemory() {
    return histogramCurrentUsedMemoryImpl();
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_histogramCurrentUsedMemory (0x409860)