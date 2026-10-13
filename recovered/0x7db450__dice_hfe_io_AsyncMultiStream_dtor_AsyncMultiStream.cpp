// FUNCTION: BF2 0x7db450
#include <vector>

namespace dice { namespace hfe { namespace io {

struct Stream {
    virtual ~Stream();
    virtual void close();     // vtable slot 2
};

struct Sub {
    Stream* s;
    char    _pad[0x18];
    ~Sub() { if (s) s->close(); }
};

class AsyncMultiStream {
public:
    virtual ~AsyncMultiStream();
    char             _pad0[0x8];   // 0x08 .. 0x10
    std::vector<Sub> m_subs;       // 0x10 .. 0x28
    Stream*          m_main;       // 0x28
};

AsyncMultiStream::~AsyncMultiStream()
{
    if (m_main) m_main->close();
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_AsyncMultiStream_dtor_AsyncMultiStream (0x7db450)
