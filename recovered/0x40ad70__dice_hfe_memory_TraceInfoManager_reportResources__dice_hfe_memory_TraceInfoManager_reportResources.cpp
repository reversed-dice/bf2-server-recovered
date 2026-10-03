// FUNCTION: BF2 0x40ad70
namespace dice { namespace hfe { namespace memory {

class TraceInfoManager {
public:
    static char* reportResources();
    static char* internal_report(void*, unsigned int);
    const char* reportTrace();

private:
    static unsigned int m_resourceIdentifierCount;
    static char m_resourceIdentifiers;
};

char* TraceInfoManager::reportResources() {
    char* r = internal_report(&m_resourceIdentifiers, m_resourceIdentifierCount);
    if (!r) r = "no resources found";
    return r;
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_TraceInfoManager_reportResources (0x40ad70)