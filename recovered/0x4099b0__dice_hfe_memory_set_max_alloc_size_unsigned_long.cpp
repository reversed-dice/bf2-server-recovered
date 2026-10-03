// FUNCTION: BF2 0x4099b0
namespace dice { namespace hfe { namespace memory {
extern void* g_maxAllocSize;
void set_max_alloc_size(unsigned long size) { g_maxAllocSize = (void*)size; }
} } }
// REVERSED_FUNCTION: dice_hfe_memory_set_max_alloc_size_unsigned_long (0x4099b0)
