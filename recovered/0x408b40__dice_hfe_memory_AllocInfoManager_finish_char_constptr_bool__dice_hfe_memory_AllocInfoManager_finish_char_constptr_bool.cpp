// FUNCTION: BF2 0x408b40
namespace dice {
namespace hfe {
namespace memory {

class AllocInfoManager {
public:
    static void internal_dump(char const* filename, bool a, bool b, int c);
    static void finish(char const* filename, bool flag);
};

void AllocInfoManager::finish(char const* filename, bool flag)
{
    internal_dump(filename, flag, true, -1);
}

} // namespace memory
} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_memory_AllocInfoManager_finish_char_constptr_bool::dice_hfe_memory_AllocInfoManager_finish_char_constptr_bool (0x408b40)