// FUNCTION: BF2 0x7a2ee0
#include <string>
#include <wchar.h>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual int read(void* dst, int len);
};

class File {
public:
    IStream* m_stream;
    bool read(std::wstring& s, int terminator);
};

bool File::read(std::wstring& s, int terminator)
{
    wchar_t buf[0x1000];
    int i = 0;
    while (m_stream->read(&buf[i], 4) == 4) {
        if (buf[i] == terminator) break;
        ++i;
    }
    buf[i] = 0;
    s.assign(buf, wcslen(buf));
    return true;
}

}}}
