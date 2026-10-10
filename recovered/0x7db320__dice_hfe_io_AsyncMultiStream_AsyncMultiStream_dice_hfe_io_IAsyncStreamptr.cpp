// FUNCTION: BF2 0x7db320
// AsyncMultiStream::AsyncMultiStream(IAsyncStream*)
#include <vector>

namespace dice { namespace hfe { namespace io {

class IAsyncStream {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual bool isCompleted();
};

class AsyncMultiStream {
public:
    virtual ~AsyncMultiStream();
    int m_8;
    char _pad1[0x4];
    std::vector<int> m_subs;
    IAsyncStream* m_28;
    unsigned char m_30;
    int m_34;

    AsyncMultiStream(IAsyncStream* s);
};

} } }

dice::hfe::io::AsyncMultiStream::AsyncMultiStream(dice::hfe::io::IAsyncStream* s)
    : m_8(1), m_subs(), m_28(s), m_30(0), m_34(-1) {
    if (s) s->addRef();
}
