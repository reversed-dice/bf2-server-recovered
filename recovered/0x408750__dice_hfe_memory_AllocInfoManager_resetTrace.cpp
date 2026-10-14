// FUNCTION: BF2 0x408750
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace memory {

struct AllocInfo {
    int pad00[5];
    int id;             // 0x14
    int f18;
    int f1c;
    int f20;
    int f24;
    int pad28[2];
    int f30;
    int f34;
    int pad38;
    int f3c;
    int f40;
    int pad44;
    struct AllocInfo* next;   // 0x48
};

class TraceInfoManager {
public:
    static int m_traceIdentifierCount;
};

class AllocInfoManager {
public:
    static int m_tableSize;
    static void* m_hashTable;

    static void resetTrace();
};

int TraceInfoManager::m_traceIdentifierCount;
int AllocInfoManager::m_tableSize;
void* AllocInfoManager::m_hashTable;

void AllocInfoManager::resetTrace() {
    for (int j = 0; j < TraceInfoManager::m_traceIdentifierCount; ++j) {
        for (int i = 0; i < m_tableSize; ++i) {
            AllocInfo* node = ((AllocInfo**)m_hashTable)[i];
            while (node != 0) {
                AllocInfo* next = node->next;
                if (node->id == j) {
                    node->f20 = 0;
                    node->f24 = 0;
                    node->f18 = 0;
                    node->f1c = 0;
                    node->f30 = 0;
                    node->f3c = 0;
                    node->f34 = 0;
                    node->f40 = 0;
                }
                node = next;
            }
        }
    }
}

} } }
