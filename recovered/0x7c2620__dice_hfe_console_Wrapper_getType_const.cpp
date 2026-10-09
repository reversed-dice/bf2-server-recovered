// FUNCTION: BF2 0x7c2620
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
};

class Wrapper {
public:
    virtual ~Wrapper();
    virtual void getObject() const;
    virtual void getObjectName() const;
    virtual void getFunctionName() const;
    virtual unsigned char getType() const;

    WrappedObject* m_object;
};

unsigned char Wrapper::getType() const
{
    unsigned int flags = m_object->getFlags();
    if ((flags & 0x18) == 0x18)
        return 1;
    if (flags & 0x8)
        return 2;
    return (flags & 0x10) ? 3 : 0;
}

} } }
