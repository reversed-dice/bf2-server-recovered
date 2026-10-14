// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7db1c0
#include <vector>

namespace dice { namespace hfe { namespace io {

class IRefCounted {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
};

class RefPtr {
public:
    IRefCounted* m_p;
    RefPtr() : m_p(0) {}
    RefPtr(const RefPtr& o) : m_p(o.m_p) { if (m_p) m_p->addRef(); }
    ~RefPtr() { if (m_p) m_p->release(); }
};

struct Entry {
    RefPtr       m_h;
    void const*  m_data;
    unsigned int m_a;
    unsigned int m_b;
    int          m_c;
    bool         m_flag;
    Entry();
};

class AsyncMultiStream {
public:
    char _pad0[0x10];
    std::vector<Entry> m_entries;
    char _pad1[0x8];
    unsigned char m_30;

    int addWrite(void const* data, unsigned int a, unsigned int b);
};

int AsyncMultiStream::addWrite(void const* data, unsigned int a, unsigned int b)
{
    int res = -1;
    if (!m_30)
    {
        Entry e;
        e.m_data = data;
        e.m_flag = true;
        e.m_a = a;
        e.m_b = b;
        m_entries.push_back(e);
        res = m_entries.size() - 1;
    }
    return res;
}

} } }
