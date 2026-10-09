// FUNCTION: BF2 0x7c26a0
namespace dice { namespace hfe { namespace console {

class WrappedObject {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual void _v38();
    virtual char const* getType(int) const; // +0x40 slot 8
};

class Manager {
public:
    char const* getNameForType(char const*) const;
};

extern Manager* manager;

class Wrapper {
public:
    virtual ~Wrapper();
    virtual void getObject() const;
    virtual void getObjectName() const;
    virtual void getFunctionName() const;
    virtual unsigned char getType() const;
    virtual void getAccess() const;
    virtual void getCategory() const;
    virtual void getReturnType() const;
    virtual char const* getArgType(int) const;

    WrappedObject* m_object;
};

char const* Wrapper::getArgType(int arg) const
{
    int nextArg = arg + 1;
    char const* type = m_object->getType(nextArg);
    char const* name = manager->getNameForType(type);
    if (name)
        return name;
    return m_object->getType(nextArg);
}

} } }
