// FUNCTION: BF2 0x85bb40
void* fn_850890_85bb40();

struct Obj_85bb40 {
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
    virtual void call(int a0, int a1, int a2, bool a3, bool a4);
};

extern "C" long dice_hfe_io_anonymous_namespace_ConsoleClass532_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 4) {
        int a0 = **(int**)(self + 0x38);
        int a1 = **(int**)(self + 0x40);
        int a2 = **(int**)(self + 0x48);
        bool a3 = **(bool**)(self + 0x50);
        *(char*)(self + 0x108) = 0;
        ((Obj_85bb40*)fn_850890_85bb40())->call(a0, a1, a2, a3, (bool)0);
    } else if (*(int*)(self + 0x30) == 5) {
        int a0 = **(int**)(self + 0x38);
        int a1 = **(int**)(self + 0x40);
        int a2 = **(int**)(self + 0x48);
        bool a3 = **(bool**)(self + 0x50);
        bool a4 = **(bool**)(self + 0x58);
        *(char*)(self + 0x108) = 0;
        ((Obj_85bb40*)fn_850890_85bb40())->call(a0, a1, a2, a3, a4);
    }
    return 0;
}
