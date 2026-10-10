// BF2_FLAGS: -fno-optimize-register-move -fno-regmove
#include <string>
#include <unistd.h>
// FUNCTION: BF2 0x802730
namespace dice { namespace hfe { namespace io {

class UnixFileStream {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual int read(void*, unsigned int);
    virtual int write(void const*, unsigned int);
    virtual void skip(unsigned int);
    virtual void getAvailableBytes();
    virtual void clone();
    virtual void canRead();
    virtual void canWrite();
    virtual void flushWrite();
    virtual bool seek(int, int);
    virtual void getPosition();
    virtual void getSize();
    virtual ~UnixFileStream();
    int m_pad;      // +0x8
    int m_fd;       // +0xc
};

int UnixFileStream::write(void const* data, unsigned int size)
{
    long left = size;
    char* p = (char*)data;
    long r;
    while (left > 0 && (r = ::write(m_fd, p, left)) != 0)
    {
        if (r == -1)
        {
            std::string tmp("<unknown>");
            break;
        }
        left -= r;
        p += r;
    }
    return (int)(size - left);
}

} } }
