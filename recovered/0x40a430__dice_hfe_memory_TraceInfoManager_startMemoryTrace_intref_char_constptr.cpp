// FUNCTION: BF2 0x40a430

unsigned int get_current_thread_id();

namespace dice { namespace hfe { namespace memory {

class TraceIdentifier;

struct TraceIdentifierStack
{
    int m_identifier;
    int m_pad;
};

class TraceInfoManager {
public:
    static int getIdentifier(const char*, TraceIdentifier**, int&);
    static void startMemoryTrace(int&, const char*);

    static int m_currentTraceStackPosition;
    static int m_traceIdentifierCount;
    static TraceIdentifier* m_traceIdentifiers[0x800];
    static TraceIdentifierStack m_traceIdentifierStack[0x81];
};

void TraceInfoManager::startMemoryTrace(int& param_1, const char* param_2)
{
    if (m_currentTraceStackPosition > 0x7f)
        return;

    if (param_1 == -1) {
        param_1 = getIdentifier(param_2, m_traceIdentifiers, m_traceIdentifierCount);
        if (param_1 < 0)
            return;
    }

    if ((unsigned int)param_1 > 0x7ffu)
        return;

    int n = ++m_currentTraceStackPosition;
    m_traceIdentifierStack[n].m_identifier = param_1;
    m_traceIdentifierStack[n].m_pad = get_current_thread_id();
}

} } }
