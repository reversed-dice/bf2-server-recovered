// FUNCTION: BF2 0xa2c3f0
#include <string>
struct rec3_a2c3f0 { unsigned w[3]; };
extern "C" unsigned _ZN4dice3hfe5world24IID_IArmorGLCompTemplateE;
void* _ZN4dice3hfe5world26getActiveTemplateComponentEj_a2c3f0(unsigned);

struct Obj_a2c3f0 {
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
    virtual void p048();
    virtual void p049();
    virtual void p050();
    virtual void p051();
    virtual void p052();
    virtual void p053();
    virtual void p054();
    virtual void p055();
    virtual void p056();
    virtual void p057();
    virtual void p058();
    virtual void p059();
    virtual void p060();
    virtual void p061();
    virtual void p062();
    virtual void p063();
    virtual void p064();
    virtual void p065();
    virtual void p066();
    virtual void p067();
    virtual void p068();
    virtual void p069();
    virtual void p070();
    virtual void p071();
    virtual void p072();
    virtual void p073();
    virtual void p074();
    virtual void call(int a0, const std::string& a1, const rec3_a2c3f0& a2, const rec3_a2c3f0& a3);
};

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass92_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 4) {
        int a0 = **(int**)(self + 0x38);
        std::string a1(**(std::string**)(self + 0x40));
        const rec3_a2c3f0* p2 = *(const rec3_a2c3f0**)(self + 0x48);
        unsigned w2_2 = p2->w[2], w2_1 = p2->w[1], w2_0 = p2->w[0];
        rec3_a2c3f0 a2;
        a2.w[0] = w2_0; a2.w[1] = w2_1; a2.w[2] = w2_2;
        const rec3_a2c3f0* p3 = *(const rec3_a2c3f0**)(self + 0x50);
        unsigned w3_2 = p3->w[2], w3_1 = p3->w[1], w3_0 = p3->w[0];
        rec3_a2c3f0 a3;
        a3.w[0] = w3_0; a3.w[1] = w3_1; a3.w[2] = w3_2;
        unsigned c0 = _ZN4dice3hfe5world24IID_IArmorGLCompTemplateE;
        *(char*)(self + 0x108) = 0;
        ((Obj_a2c3f0*)_ZN4dice3hfe5world26getActiveTemplateComponentEj_a2c3f0(c0))->call(a0, a1, a2, a3);
    }
    return 0;
}
