// FUNCTION: BF2 0x40ada0
namespace dice { namespace hfe { namespace memory {

class TraceInfoManager {
public:
    static char* reportResources();
private:
    static char* internal_report(void*, unsigned int);
    static char* m_resourceIdentifiers;
    static unsigned int m_resourceIdentifierCount;
};

char* TraceInfoManager::reportResources() {
    char* result = internal_report(&m_resourceIdentifiers, m_resourceIdentifierCount);
    if (result == 0) result = "no resources found";
    return result;
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_TraceInfoManager::reportResources (0x40ad70)