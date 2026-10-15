// FUNCTION: BF2 0x7daeb0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace io {

class IAsyncStream {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual bool isCompleted();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual int op68(IAsyncStream* s);
    virtual void v14();
    virtual int op78(IAsyncStream* s);
};

struct Entry {
    IAsyncStream* m_p;
    void const*   m_data;
    unsigned int  m_a;
    unsigned int  m_b;
    int           m_c;
    bool          m_flag;
};

class AsyncMultiStream {
public:
    virtual ~AsyncMultiStream();
    int               m_8;
    char              _pad1[4];
    std::vector<Entry> m_subs;
    IAsyncStream*     m_28;
    unsigned char     m_30;
    int               m_34;
    void update();
    void start(int n);
};

void AsyncMultiStream::update()
{
    if (m_34 != -1) {
        Entry& e = m_subs[m_34];
        if (e.m_p->isCompleted()) {
            if (e.m_flag != 0) {
                e.m_c = m_28->op68(e.m_p);
            } else {
                e.m_c = m_28->op78(e.m_p);
            }
            m_34 = m_34 + 1;
            if (m_34 < (int)m_subs.size()) {
                start(m_34);
                return;
            }
            m_34 = -1;
        }
    }
}

} } }
