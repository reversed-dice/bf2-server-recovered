// FUNCTION: BF2 0x408bc0
#include <stdlib.h>
#include <string.h>

namespace dice { namespace hfe { namespace memory {

struct CallStackEntry {
    unsigned int m_address;
};

class CallStack {
public:
    static int build(CallStackEntry* entries, int maxDepth, int skip);
};

struct AllocInfo {
    int m_depth;
    CallStackEntry* m_stack;
    unsigned int m_hash;
    char m_data[0x34];
    AllocInfo* m_next;
};

class AllocInfoManager {
public:
    static AllocInfo* getCurrentAllocInfo(int depth);
    static unsigned int hash_callstack(CallStackEntry* entries, int count);
    static AllocInfo** m_hashTable;
    static unsigned int m_tableSize;
};

AllocInfo* AllocInfoManager::getCurrentAllocInfo(int depth)
{
    CallStackEntry stack[128];
    if (depth > 0x80)
        depth = 0x80;
    int count = CallStack::build(stack, depth, 3);
    if (count == -1)
        return 0;
    unsigned int hash = hash_callstack(stack, count);
    AllocInfo** bucket = &m_hashTable[hash % m_tableSize];
    AllocInfo* head = *bucket;
    AllocInfo* prev = 0;
    for (AllocInfo* info = head; info != 0; info = info->m_next) {
        if (info->m_hash == hash && info->m_depth == count
            && memcmp(info->m_stack, stack, count * sizeof(CallStackEntry)) == 0) {
            if (info != head) {
                AllocInfo* next = info->m_next;
                *bucket = info;
                info->m_next = head;
                if (prev)
                    prev->m_next = next;
            }
            return info;
        }
        prev = info;
    }
    AllocInfo* info = (AllocInfo*)malloc(sizeof(AllocInfo));
    memset(info, 0, sizeof(AllocInfo));
    info->m_hash = hash;
    info->m_stack = (CallStackEntry*)malloc(count * sizeof(CallStackEntry));
    memcpy(info->m_stack, stack, count * sizeof(CallStackEntry));
    info->m_depth = count;
    if (prev)
        prev->m_next = info;
    else
        m_hashTable[hash % m_tableSize] = info;
    return info;
}

} } }
