// FUNCTION: BF2 0x9b1a80
#include <string>
extern "C" unsigned _ZN4dice3hfe5world24CID_SimpleObjectTemplateE;
void* _ZN4dice3hfe5world17getActiveTemplateEj_9b1a80(unsigned);

struct Obj_9b1a80 {
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
    virtual void call(int a0, const std::string& a1, int a2);
};

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass107_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 3) {
        int a0 = **(int**)(self + 0x38);
        std::string a1(**(std::string**)(self + 0x40));
        int a2 = **(int**)(self + 0x48);
        unsigned c0 = _ZN4dice3hfe5world24CID_SimpleObjectTemplateE;
        *(char*)(self + 0x108) = 0;
        ((Obj_9b1a80*)_ZN4dice3hfe5world17getActiveTemplateEj_9b1a80(c0))->call(a0, a1, a2);
    }
    return 0;
}
