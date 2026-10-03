// FUNCTION: BF2 0x85d130
void* _ZN4dice3hfe2io40_GLOBAL__N__ZN4dice3hfe2io11fileManagerE19getActiveControlMapEv_85d130();

struct Obj_85d130 {
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
    virtual void call(int a0, int a1, int a2, int a3, bool a4, float f0, float f1);
};

extern "C" long dice_hfe_io_anonymous_namespace_ConsoleClass550_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 4) {
        int a0 = **(int**)(self + 0x38);
        int a1 = **(int**)(self + 0x40);
        int a2 = **(int**)(self + 0x48);
        int a3 = **(int**)(self + 0x50);
        *(char*)(self + 0x108) = 0;
        ((Obj_85d130*)_ZN4dice3hfe2io40_GLOBAL__N__ZN4dice3hfe2io11fileManagerE19getActiveControlMapEv_85d130())->call(a0, a1, a2, a3, (bool)0, 0.0f, 0.0f);
    } else if (*(int*)(self + 0x30) == 5) {
        int a0 = **(int**)(self + 0x38);
        int a1 = **(int**)(self + 0x40);
        int a2 = **(int**)(self + 0x48);
        int a3 = **(int**)(self + 0x50);
        bool a4 = **(bool**)(self + 0x58);
        *(char*)(self + 0x108) = 0;
        ((Obj_85d130*)_ZN4dice3hfe2io40_GLOBAL__N__ZN4dice3hfe2io11fileManagerE19getActiveControlMapEv_85d130())->call(a0, a1, a2, a3, a4, 0.0f, 0.0f);
    }
    return 0;
}
