// FUNCTION: BF2 0x8611d0
#include <string>


struct Obj_8611d0 {
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
    virtual void p019();
    virtual void p020();
    virtual void p021();
    virtual void p022();
    virtual void p023();
    virtual void p024();
    virtual void p025();
    virtual void p026();
    virtual void p027();
    virtual void p028();
    virtual void p029();
    virtual void p030();
    virtual void call(const std::string& a0, const std::string& a1, bool a2);
};

extern "C" long dice_hfe_io_anonymous_namespace_ConsoleClass559_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 2) {
        std::string a0(**(std::string**)(self + 0x38));
        std::string a1(**(std::string**)(self + 0x40));
        *(char*)(self + 0x108) = 0;
        (*(Obj_8611d0**)0x010b4050)->call(a0, a1, (bool)1);
    } else if (*(int*)(self + 0x30) == 3) {
        std::string a0(**(std::string**)(self + 0x38));
        std::string a1(**(std::string**)(self + 0x40));
        bool a2 = **(bool**)(self + 0x48);
        *(char*)(self + 0x108) = 0;
        (*(Obj_8611d0**)0x010b4050)->call(a0, a1, a2);
    }
    return 0;
}
