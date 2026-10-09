// FUNCTION: BF2 0x7bd660
namespace dice { namespace hfe {

class ConsoleObject {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual char const* getObjectName() const;   // +0x18 slot 3
    virtual char const* getFunctionName() const; // +0x20 slot 4
};

namespace console {

class Object {
public:
    inline Object(char const* fName, char const* oName)
        : m_functionName(fName), m_objectName(oName) {}
    virtual ~Object();

    char const* m_functionName; // +0x8
    char const* m_objectName;   // +0x10
};

class ObjectWrapper : public Object {
public:
    ObjectWrapper(ConsoleObject* obj);
    virtual ~ObjectWrapper();

    void* _pad;                 // +0x18
    ConsoleObject* m_object;    // +0x20
};

ObjectWrapper::ObjectWrapper(ConsoleObject* obj)
    : Object(obj->getFunctionName(), obj->getObjectName())
{
    m_object = obj;
}

} } }
