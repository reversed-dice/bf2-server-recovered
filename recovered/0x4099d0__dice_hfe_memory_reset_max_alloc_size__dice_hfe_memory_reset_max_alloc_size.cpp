// FUNCTION: BF2 0x4099d0
namespace dice { namespace hfe { namespace memory {
namespace {
unsigned long long g_maxAllocSize = 0;
}
void reset_max_alloc_size() {
    g_maxAllocSize = 0x1000000;
}
} } }
// REVERSED_FUNCTION: dice_hfe_memory_reset_max_alloc_size (0x4099d0)