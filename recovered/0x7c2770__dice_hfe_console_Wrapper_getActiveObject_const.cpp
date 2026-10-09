// FUNCTION: BF2 0x7c2770
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
    virtual unsigned int getFlags() const; // +0x38 slot 7
    virtual void* _v40(void*, int);
    virtual void* _v48(void*) const;
    virtual void* getProperty(int) const;  // +0x50 slot 10
    void* _pad;
    char* m_propertyName; // +0x10
};

class Manager {
public:
    WrappedObject* getObjectProperty(char const*) const;
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
    virtual void getArgType(int) const;
    virtual void getMinNoArgs() const;
    virtual void getMaxNoArgs() const;
    virtual bool isActive() const;

    void* getActiveObject() const;

    WrappedObject* m_object;
};

void* Wrapper::getActiveObject() const
{
    unsigned int flags = m_object->getFlags() & 1;
    if (flags) {
        WrappedObject* prop = manager->getObjectProperty(m_object->m_propertyName);
        if (prop) {
            unsigned int pflags = prop->getFlags() & 1;
            if (!pflags)
                return prop->getProperty(0);
        }
    }
    return 0;
}

} } }
