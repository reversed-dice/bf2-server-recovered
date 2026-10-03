// FUNCTION: BF2 0xa98bc0
#include <string>


struct Obj_a98bc0 {
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
    virtual void p031();
    virtual void p032();
    virtual void p033();
    virtual void p034();
    virtual void p035();
    virtual void p036();
    virtual void p037();
    virtual void p038();
    virtual void p039();
    virtual void p040();
    virtual void p041();
    virtual void p042();
    virtual void p043();
    virtual void p044();
    virtual void p045();
    virtual void p046();
    virtual void p047();
    virtual void call(const std::string& a0, bool a1);
};

extern "C" long dice_hfe_anonymous_namespace_ConsoleClass594_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 2) {
        std::string a0(**(std::string**)(self + 0x38));
        bool a1 = **(bool**)(self + 0x40);
        *(char*)(self + 0x108) = 0;
        (*(Obj_a98bc0**)0x010c5420)->call(a0, a1);
    }
    return 0;
}
