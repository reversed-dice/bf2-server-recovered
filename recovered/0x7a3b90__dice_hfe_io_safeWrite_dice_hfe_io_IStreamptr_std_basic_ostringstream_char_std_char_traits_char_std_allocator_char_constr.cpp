// FUNCTION: BF2 0x7a3b90
#include <string>
#include <sstream>

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

bool safeWrite(IStream* p, std::string const& s);

bool safeWrite(IStream* p, std::ostringstream const& s)
{
    return safeWrite(p, s.str());
}

} } }
