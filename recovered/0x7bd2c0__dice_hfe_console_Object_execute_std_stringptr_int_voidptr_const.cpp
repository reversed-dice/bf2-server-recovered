// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7bd2c0
#include <string>

namespace dice { namespace hfe { namespace console {

class Object {
public:
    virtual ~Object();
    virtual int executeBinary(unsigned char* data, int numArgs, std::string* result, void* param) const; // slot 2 (+0x10)
    virtual int compile(std::string* args, int numArgs, unsigned char* buffer) const;                     // slot 3 (+0x18)
    virtual std::string execute(std::string* args, int numArgs, void* context) const;                     // slot 4 (+0x20)
    virtual int getMaxArgs() const;                                                                       // slot 5 (+0x28)
    virtual int getMinArgs() const;                                                                       // slot 6 (+0x30)
};

std::string Object::execute(std::string* args, int numArgs, void* context) const
{
    std::string result;
    if (getMaxArgs() < numArgs) {
        return "ERROR, To many args";
    }
    if (numArgs < getMinArgs()) {
        return "ERROR, To few args";
    }
    unsigned char buffer[256];
    compile(args, numArgs, buffer);
    executeBinary(buffer, numArgs, &result, context);
    return result;
}

} } }
