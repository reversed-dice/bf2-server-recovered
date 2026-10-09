// FUNCTION: BF2 0x7a3ab0
#include <string>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int write(void const* data, int size);
};

bool safeWrite(IStream* p, int v);

bool safeWrite(IStream* p, std::string const& s)
{
    int n = (int)s.size();
    if (!safeWrite(p, n))
        return false;
    return p->write(s.data(), n) == n;
}

}}}
