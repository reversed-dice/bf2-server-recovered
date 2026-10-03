// FUNCTION: BF2 0x4098f0
namespace dice { namespace hfe { namespace memory {

extern const char* notActiveInFinalBuildString;

const char* dump_active_allocations_to_file(const char*) {
    return notActiveInFinalBuildString;
}

} } }

// REVERSED_FUNCTION: dice_hfe_memory_dump_active_allocations_to_file_char_constptr::dice_hfe_memory_dump_active_allocations_to_file_char_constptr (0x4098f0)