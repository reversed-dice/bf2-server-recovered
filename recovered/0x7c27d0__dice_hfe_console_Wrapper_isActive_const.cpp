// FUNCTION: BF2 0x7c27d0
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
    virtual void* checkActive(void*) const; // +0x48 slot 9
};

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
    virtual bool isActive() const; // +0x60 slot 12

    void* getActiveObject() const;

    WrappedObject* m_object;
};

bool Wrapper::isActive() const
{
    unsigned int flags = m_object->getFlags() & 1;
    if (flags) {
        void* active = getActiveObject();
        if (m_object->checkActive(active))
            return true;
        return active != 0;
    }
    return true;
}

} } }
