// FUNCTION: BF2 0x7bd5d0
#include <string>
#include <string.h>

namespace dice { namespace hfe { namespace console {

class Object {
public:
    virtual ~Object();
};

class ObjectWrapper : public Object {
public:
    virtual ~ObjectWrapper();
    virtual void _v10();
    virtual int compile(std::string* args, int numArgs, unsigned char* buffer) const;
};

int ObjectWrapper::compile(std::string* args, int numArgs, unsigned char* buffer) const
{
    int offset = 0;
    for (int i = 0; i < numArgs; ++i) {
        int len = args[i].length() + 1;
        memcpy(buffer + offset, args[i].c_str(), len);
        offset += len;
    }
    return offset;
}

} } }
