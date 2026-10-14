// FUNCTION: BF2 0x714300
#include <string>

namespace dice { namespace hfe { namespace world {

extern "C" int sprintf(char*, const char*, ...);

extern void* fn_713fb0(void* a);
extern void* fn_69a1e0(void* a);
extern void fn_4eea40(void* a, float b);

class NameHolder {
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
    virtual std::string getName();
};

void getNameOfObjectInFocus_0x714300(void* self)
{
    char buf[1024];
    void* obj = fn_713fb0(self);
    if (obj == 0) {
        fn_4eea40((void*)0xb975aa, *(float*)0xb26c3c);
        return;
    }
    void* parent = fn_69a1e0(obj);
    NameHolder* h = *(NameHolder**)((char*)parent + 0x80);
    if (h != 0) {
        std::string name = h->getName();
        sprintf(buf, "Name: %s\nCreated by: %s\nLast modified by: %s\n",
                name.c_str(), "(unknown)", "(unknown)");
    } else {
        sprintf(buf, "Name: %s\nCreated by: %s\nLast modified by: %s\n",
                "(unknown)", "(unknown)", "(unknown)");
    }
}

} } }
