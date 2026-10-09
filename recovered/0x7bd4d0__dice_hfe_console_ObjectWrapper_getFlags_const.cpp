// FUNCTION: BF2 0x7bd4d0
namespace dice { namespace hfe {

class ConsoleObject {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual int getType() const; // +0x28 slot 5
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
    virtual bool hasReturnValue() const; // +0x88 slot 17
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
    virtual void _v18();
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual unsigned int getFlags() const; // +0x38 slot 7

    char _pad[0x18]; // offset +0x20
    ConsoleObject* m_consoleObject;
};

unsigned int ObjectWrapper::getFlags() const
{
    unsigned int flags = m_consoleObject->hasReturnValue() ? 0x40 : 0x60;
    switch (m_consoleObject->getType()) {
    case 2:
        return flags | 0xa;
    case 3:
        return flags | 0x12;
    case 1:
        return flags | 0x1a;
    default:
        return flags;
    }
}

} } }
