// FUNCTION: BF2 0x40a550
namespace dice { namespace hfe { namespace memory {

struct TraceIdentifierStack { int m_identifier; int m_pad; };
struct TraceIdentifier { char m_name[0x104]; int f104; int f108; int f10c; int f110; int f114; int f118; };

class TraceInfoManager {
public:
    static int allocate(int);
    static int m_currentTraceStackPosition;
    static int m_traceIdentifierCount;
    static TraceIdentifier* m_traceIdentifiers[0x800];
    static TraceIdentifierStack m_traceIdentifierStack[0x81];
};

int TraceInfoManager::allocate(int n)
{
    int pos = m_currentTraceStackPosition;
    if (pos < 0)
        return 0;
    int id = m_traceIdentifierStack[pos].m_identifier;
    if (id < 0)
        return 0;
    TraceIdentifier* t = m_traceIdentifiers[id];
    int count = t->f10c + 1;
    int size = t->f110 + n;
    t->f10c = count;
    t->f110 = size;
    if (n < 0)
        goto tail;
    if (n >= t->f114)
    {
        int peak0 = t->f104;
        if (peak0 != 0)
            goto after;
    }
    t->f114 = n;
after:
    if (n > t->f118)
        t->f118 = n;
tail:
    {
    int peak = t->f104;
    if (count > t->f108)
        t->f108 = count;
    if (size > peak)
        t->f104 = size;
    }
    return id + 1;
}
} } }
