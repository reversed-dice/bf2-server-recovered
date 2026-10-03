// FUNCTION: BF2 0x40ada0
namespace dice { namespace hfe { namespace memory {

struct TraceIdentifier;

class TraceInfoManager {
public:
    static const char* internal_report(TraceIdentifier** traceIdentifiers, int count);
    const char* reportTrace();

    static TraceIdentifier* m_traceIdentifiers;
    static int m_traceIdentifierCount;
};

const char* TraceInfoManager::reportTrace() {
    const char* result = internal_report(&m_traceIdentifiers, m_traceIdentifierCount);
    return result ? result : "no traces found";
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_TraceInfoManager::reportTrace (0x40ada0)