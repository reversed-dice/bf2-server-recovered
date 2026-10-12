// FUNCTION: BF2 0x7d0ee0
struct timeval {
    long tv_sec;
    long tv_usec;
};

extern "C" int gettimeofday(timeval* tv, void* tz);

namespace dice { namespace hfe { namespace io {

struct NetTime {
    long tv_sec;   // +0x0
    long tv_usec;  // +0x8
    char _pad[0x10];
    int m_extra;  // +0x20
};

class NetServer {
public:
    char _pad0[0x528];
    NetTime m_time;  // +0x528

    int getTime() const;
};

int NetServer::getTime() const
{
    NetTime const& s = m_time;
    timeval tv;
    gettimeofday(&tv, 0);
    return (int)((tv.tv_sec - s.tv_sec) * 1000 + (tv.tv_usec - s.tv_usec) / 1000 + s.m_extra);
}

} } }
