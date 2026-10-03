// FUNCTION: BF2 0x4086f0
namespace dice { namespace hfe { namespace memory {

class AllocInfoManager {
public:
    static unsigned int hash_callstack(unsigned int* callstack, int count);
};

unsigned int AllocInfoManager::hash_callstack(unsigned int* callstack, int count) {
    unsigned int hash = 0x719fdae9;
    if (count > 0) {
        int i = 0;
        do {
            hash ^= *callstack;
            ++i;
            ++callstack;
            hash = (hash << 8) | (hash >> 24);
        } while (count != i);
    }
    return hash;
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_AllocInfoManager_hash_callstack_dice_hfe_memory_CallStackEntryptr_int (0x4086f0)