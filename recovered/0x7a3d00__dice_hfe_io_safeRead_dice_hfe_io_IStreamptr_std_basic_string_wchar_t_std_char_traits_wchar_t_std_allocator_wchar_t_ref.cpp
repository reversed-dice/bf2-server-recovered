// FUNCTION: BF2 0x7a3d00
#include <string>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual unsigned int read(void*, int);
    virtual unsigned int write(void const*, int);
};

bool safeRead(IStream* p, int& n);

bool safeRead(IStream* p, std::wstring& s)
{
    int n = 0;
    if (!safeRead(p, n)) return false;
    if ((unsigned int)n > 499999u) return false;
    if (n > 0) {
        s.resize(n, 0);
        unsigned int r = p->read(&s[0], (int)((unsigned long)n << 2));
        return r == ((unsigned long)n << 2);
    }
    s.clear();
    return true;
}

} } }
