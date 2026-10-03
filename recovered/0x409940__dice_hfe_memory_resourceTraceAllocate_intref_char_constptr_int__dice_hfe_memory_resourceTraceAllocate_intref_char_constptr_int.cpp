// FUNCTION: BF2 0x409940
namespace dice { namespace hfe {
class TraceIdentifier;
namespace memory {

void resourceAllocate(int& idRef, char const* name, int size);

void resourceTraceAllocate(int& idRef, char const* name, int size)
{
    resourceAllocate(idRef, name, size);
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_resourceTraceAllocate_intref_char_constptr_int (0x409940)