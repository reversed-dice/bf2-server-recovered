// FUNCTION: BF2 0xaf9050
struct rec3_af9050 { unsigned w[3]; };


struct Obj_af9050 {
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
    virtual void call(const rec3_af9050& a0, float a1);
};

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass194_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 2) {
        const rec3_af9050* p0 = *(const rec3_af9050**)(self + 0x38);
        unsigned w0_2 = p0->w[2], w0_1 = p0->w[1], w0_0 = p0->w[0];
        rec3_af9050 a0;
        a0.w[0] = w0_0; a0.w[1] = w0_1; a0.w[2] = w0_2;
        float a1 = **(float**)(self + 0x40);
        *(char*)(self + 0x108) = 0;
        (*(Obj_af9050**)0x01140ad8)->call(a0, a1);
    }
    return 0;
}
