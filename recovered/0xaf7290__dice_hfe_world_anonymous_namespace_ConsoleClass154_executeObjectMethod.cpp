// FUNCTION: BF2 0xaf7290
void* fn_af38a0_af7290();

struct Obj_af7290 {
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
    virtual void call(int a0, float a1, float a2);
};

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass154_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 3) {
        int a0 = **(int**)(self + 0x38);
        float a1 = **(float**)(self + 0x40);
        float a2 = **(float**)(self + 0x48);
        *(char*)(self + 0x108) = 0;
        ((Obj_af7290*)fn_af38a0_af7290())->call(a0, a1, a2);
    }
    return 0;
}
