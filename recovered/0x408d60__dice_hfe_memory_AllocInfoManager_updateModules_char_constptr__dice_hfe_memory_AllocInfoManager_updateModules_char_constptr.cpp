// FUNCTION: BF2 0x408d60
namespace dice {
namespace hfe {
namespace memory {

class AllocInfoManager {
public:
    static void internal_dump(char const* filename, bool a, bool b, int c);
    static void dumpAllAllocatedToFile(char const* filename);
    static void updateModules(char const*);
};

void AllocInfoManager::updateModules(char const*)
{
}

} // namespace memory
} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_memory_AllocInfoManager_updateModules_char_constptr::dice_hfe_memory_AllocInfoManager_updateModules_char_constptr (0x408d60)