// FUNCTION: BF2 0x85c360
void* fn_850890_85c360();

struct Obj_85c360 {
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
    virtual void call(int a0, int a1, int a2, int a3, int a4, bool a5);
};

extern "C" long dice_hfe_io_anonymous_namespace_ConsoleClass536_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 5) {
        int a0 = **(int**)(self + 0x38);
        int a1 = **(int**)(self + 0x40);
        int a2 = **(int**)(self + 0x48);
        int a3 = **(int**)(self + 0x50);
        int a4 = **(int**)(self + 0x58);
        *(char*)(self + 0x108) = 0;
        ((Obj_85c360*)fn_850890_85c360())->call(a0, a1, a2, a3, a4, (bool)0);
    } else if (*(int*)(self + 0x30) == 6) {
        int a0 = **(int**)(self + 0x38);
        int a1 = **(int**)(self + 0x40);
        int a2 = **(int**)(self + 0x48);
        int a3 = **(int**)(self + 0x50);
        int a4 = **(int**)(self + 0x58);
        bool a5 = **(bool**)(self + 0x60);
        *(char*)(self + 0x108) = 0;
        ((Obj_85c360*)fn_850890_85c360())->call(a0, a1, a2, a3, a4, a5);
    }
    return 0;
}
