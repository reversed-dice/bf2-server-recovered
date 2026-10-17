// FUNCTION: BF2 0x40a4d0

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
    static void endMemoryTrace(int);

    static int m_currentTraceStackPosition;
    static int m_traceIdentifierCount;
    static TraceIdentifier* m_traceIdentifiers[0x800];
    static TraceIdentifierStack m_traceIdentifierStack[0x81];
};

void TraceInfoManager::endMemoryTrace(int param_1)
{
    int pos = m_currentTraceStackPosition;
    if (pos >= 0) {
        if (m_traceIdentifierStack[pos].m_identifier == param_1) {
            if (m_traceIdentifierStack[pos].m_pad == (int)get_current_thread_id()) {
                m_traceIdentifierStack[pos].m_identifier = -1;
                m_currentTraceStackPosition = pos - 1;
            }
        }
    } else {
        m_currentTraceStackPosition = 0;
    }
}

} } }
