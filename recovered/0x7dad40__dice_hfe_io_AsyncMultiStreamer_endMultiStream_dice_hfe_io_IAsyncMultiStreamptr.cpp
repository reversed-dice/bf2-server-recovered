// FUNCTION: BF2 0x7dad40
#include <list>
#include <algorithm>

namespace dice { namespace hfe { namespace io {
class IAsyncMultiStream;
class AsyncMultiStreamer {
public:
    int endMultiStream(IAsyncMultiStream* s);
    char pad[0x10];
    std::list<IAsyncMultiStream*> m_list;   // +0x10
};
int AsyncMultiStreamer::endMultiStream(IAsyncMultiStream* s)
{
    std::list<IAsyncMultiStream*>::iterator it = std::find(m_list.begin(), m_list.end(), s);
    if (it != m_list.end())
        m_list.erase(it);
    return 0;
}
}}}
