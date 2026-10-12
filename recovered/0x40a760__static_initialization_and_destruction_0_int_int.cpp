// FUNCTION: BF2 0x40a760

namespace dice { namespace hfe { namespace memory {

class TraceIdentifierStack
{
public:
    TraceIdentifierStack();
private:
    int m_identifier;
    int m_pad;
};

TraceIdentifierStack::TraceIdentifierStack()
{
    m_identifier = 0;
    m_pad = 0;
}

TraceIdentifierStack m_traceIdentifierStack[0x81];

} } }
