// FUNCTION: BF2 0x408720
#include <cstdlib>
#include <cstring>

namespace dice { namespace hfe { namespace memory {

class AllocInfoManager {
public:
    static void init(int tableSize);

    static int m_tableSize;
    static void* m_hashTable;
};

int AllocInfoManager::m_tableSize;
void* AllocInfoManager::m_hashTable;

void AllocInfoManager::init(int param_1) {
    m_tableSize = param_1;
    unsigned long long size = (unsigned long long)param_1 * 8;
    m_hashTable = malloc(size);
    memset(m_hashTable, 0, size);
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_AllocInfoManager_init_int (0x408720)