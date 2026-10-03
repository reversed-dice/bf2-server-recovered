// FUNCTION: BF2 0x408b20
namespace dice { namespace hfe { namespace memory {

class AllocInfoManager {
public:
    static void dumpStateToFile(const char* filename, unsigned int flag);
    static void internal_dump(const char* a, unsigned int b, unsigned int c, unsigned int d);
};

void AllocInfoManager::dumpStateToFile(const char* filename, unsigned int flag)
{
    internal_dump(filename, flag >> 0x1f, 0, flag);
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_AllocInfoManager_dumpStateToFile_char_constptr_int (0x408b20)