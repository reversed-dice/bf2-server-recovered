// FUNCTION: BF2 0x69df50
#include <string>
#include <ostream>

namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual const std::string& getName() const;
    char m_pad[0x18];
    unsigned int m_id;
};

struct IObject_ptrproxy {
    IObject* m_object;
};

std::ostream& operator<<(std::ostream& os, const IObject_ptrproxy& px)
{
    IObject* p = px.m_object;
    if (p) {
        if (p->getName().length() != 0) {
            os << p->getName();
            return os;
        }
        os << "id" << (unsigned long)p->m_id;
        return os;
    }
    os << "NoObject";
    return os;
}

} } }
