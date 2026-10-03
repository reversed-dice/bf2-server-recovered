// FUNCTION: BF2 0xaa9290
// BF2_FLAGS: -fno-strict-aliasing
struct rec2_aa9290 { unsigned w[2]; };
struct rec3_aa9290 { unsigned w[3]; };


struct Obj_aa9290 {
    virtual void p000();
    virtual void p001();
    virtual void p002();
    virtual void p003();
    virtual void p004();
    virtual void p005();
    virtual void p006();
    virtual void p007();
    virtual void call(const rec2_aa9290& a0, const rec2_aa9290& a1, int a2, const rec3_aa9290& a3);
};

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass263_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 4) {
        const rec2_aa9290* p0 = *(const rec2_aa9290**)(self + 0x38);
        unsigned w0_1 = p0->w[1], w0_0 = p0->w[0];
        rec2_aa9290 a0;
        a0.w[0] = w0_0; a0.w[1] = w0_1;
        const rec2_aa9290* p1 = *(const rec2_aa9290**)(self + 0x40);
        unsigned w1_1 = p1->w[1], w1_0 = p1->w[0];
        rec2_aa9290 a1;
        a1.w[0] = w1_0; a1.w[1] = w1_1;
        int a2 = **(int**)(self + 0x48);
        const rec3_aa9290* p3 = *(const rec3_aa9290**)(self + 0x50);
        unsigned w3_2 = p3->w[2], w3_1 = p3->w[1], w3_0 = p3->w[0];
        rec3_aa9290 a3;
        a3.w[0] = w3_0; a3.w[1] = w3_1; a3.w[2] = w3_2;
        *(char*)(self + 0x108) = 0;
        (*(Obj_aa9290**)0x0112ee48)->call(a0, a1, a2, a3);
    }
    return 0;
}
