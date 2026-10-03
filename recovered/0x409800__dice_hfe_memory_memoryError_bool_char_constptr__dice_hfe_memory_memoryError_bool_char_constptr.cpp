// FUNCTION: BF2 0x409800
namespace { void internal_memoryDebugCallback(bool, char const*); }

namespace dice { namespace hfe { namespace memory {

extern unsigned char memoryError_useNormalAllocations;

void memoryError(bool param_1, char const* param_2) {
    unsigned char uVar1 = 1;
    if (param_1) {
        uVar1 = memoryError_useNormalAllocations;
    }
    memoryError_useNormalAllocations = uVar1;
    internal_memoryDebugCallback(param_1, param_2);
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_memoryError_bool_char_constptr (0x409800)