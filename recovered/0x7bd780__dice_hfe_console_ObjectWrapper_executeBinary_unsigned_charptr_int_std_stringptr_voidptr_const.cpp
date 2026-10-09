// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7bd780
#include <string>

namespace dice { namespace hfe {

class ConsoleObject {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual void _v38();
    virtual void _v40();
    virtual void _v48();
    virtual void _v50();
    virtual void _v58();
    virtual void _v60();
    virtual void _v68();
    virtual void _v70();
    virtual void _v78();
    virtual void _v80();
    virtual void _v88();
    virtual void _v90();
    virtual void _v98();
    virtual void _va0();
    virtual void _va8();
    virtual std::string execute(std::string* args, int numArgs); // +0xb0 slot 22
};

namespace console {

class Object {
public:
    virtual ~Object();
};

class ObjectWrapper : public Object {
public:
    virtual ~ObjectWrapper();
    virtual void _v10();
    virtual int executeBinary(unsigned char* data, int numArgs, std::string* result, void* param) const;

    char _pad[0x18];
    ConsoleObject* m_object;
};

int ObjectWrapper::executeBinary(unsigned char* data, int numArgs, std::string* result, void* param) const
{
    std::string args[10];
    int offset = 0;
    for (int i = 0; i < numArgs; ++i) {
        char const* str = (char const*)(data + offset);
        args[i] = str;
        int len = args[i].length() + 1;
        offset += len;
    }
    *result = m_object->execute(args, numArgs);
    return offset;
}

} } }
