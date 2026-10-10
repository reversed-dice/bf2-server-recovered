#include <string>
#include <unistd.h>
// FUNCTION: BF2 0x802800
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

bool UnixFileStream::seek(int origin, int offset)
{
    int whence = 0;
    if (origin != 0)
        whence = (origin == 2) ? 2 : 1;
    if (::lseek(m_fd, offset, whence) == -1)
    {
        std::string tmp("<unknown>");
        return false;
    }
    return true;
}

} } }
