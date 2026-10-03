// FUNCTION: BF2 0x408b60
namespace dice { namespace hfe { namespace memory {
class AllocInfoManager {
public:
    static void setCompleteAllocationDataToZero();
    static int m_tableSize;
    static void* volatile m_hashTable;
};
int AllocInfoManager::m_tableSize;
void* volatile AllocInfoManager::m_hashTable;

void AllocInfoManager::setCompleteAllocationDataToZero() {
    int count = m_tableSize;
    if (count <= 0) return;
    int maxLen = 0;
    int i = 0;
    do {
        void* node = ((void**)m_hashTable)[i];
        if (node != 0) {
            int len = 0;
            do {
                void* next = *(void**)((char*)node + 0x48);
                len++;
                *(int*)((char*)node + 0x20) = 0;
                *(int*)((char*)node + 0x24) = 0;
                node = next;
            } while (node != 0);
            if (maxLen >= len) {
                count = m_tableSize;
                goto next_iter;
            }
            maxLen = len;
            count = m_tableSize;
        }
        next_iter:
        i++;
    } while (i < count);
}
} } }
// REVERSED_FUNCTION: dice_hfe_memory_AllocInfoManager_setCompleteAllocationDataToZero (0x408b60)
