// FUNCTION: BF2 0x408b30
namespace dice {
namespace hfe {
namespace memory {

class AllocInfoManager {
public:
    static void internal_dump(char const* filename, bool a, bool b, int c);
    static void dumpAllAllocatedToFile(char const* filename);
};

void AllocInfoManager::dumpAllAllocatedToFile(char const* filename)
{
    internal_dump(filename, false, false, -1);
}

} // namespace memory
} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_memory_AllocInfoManager_dumpAllAllocatedToFile_char_constptr::dice_hfe_memory_AllocInfoManager_dumpAllAllocatedToFile_char_constptr (0x408b30)