// FUNCTION: BF2 0x75c120
#include <string>


struct Obj_75c120 {
    virtual void p000();
    virtual void p001();
    virtual void p002();
    virtual void p003();
    virtual void p004();
    virtual void p005();
    virtual void p006();
    virtual void p007();
    virtual void p008();
    virtual void p009();
    virtual void p010();
    virtual void p011();
    virtual void p012();
    virtual void p013();
    virtual void p014();
    virtual void p015();
    virtual void p016();
    virtual void p017();
    virtual void p018();
    virtual void call(const std::string& a0, const std::string& a1, float a2, bool a3);
};

extern "C" long dice_hfe_anonymous_namespace_ConsoleClass167_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 2) {
        std::string a0(**(std::string**)(self + 0x38));
        std::string a1(**(std::string**)(self + 0x40));
        *(char*)(self + 0x108) = 0;
        (*(Obj_75c120**)0x010aa288)->call(a0, a1, 1.0f, (bool)0);
    } else if (*(int*)(self + 0x30) == 3) {
        std::string a0(**(std::string**)(self + 0x38));
        std::string a1(**(std::string**)(self + 0x40));
        float a2 = **(float**)(self + 0x48);
        *(char*)(self + 0x108) = 0;
        (*(Obj_75c120**)0x010aa288)->call(a0, a1, a2, (bool)0);
    } else if (*(int*)(self + 0x30) == 4) {
        std::string a0(**(std::string**)(self + 0x38));
        std::string a1(**(std::string**)(self + 0x40));
        float a2 = **(float**)(self + 0x48);
        bool a3 = **(bool**)(self + 0x50);
        *(char*)(self + 0x108) = 0;
        (*(Obj_75c120**)0x010aa288)->call(a0, a1, a2, a3);
    }
    return 0;
}
