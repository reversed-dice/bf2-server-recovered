// FUNCTION: BF2 0x4bd430
namespace dice { namespace hfe { namespace world {
struct DT2 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v68(int a);
};
extern char g_flag_1092c24;
void f_0x4bd430(DT2* self) {
    g_flag_1092c24 = 1;
    self->v68(1);
    g_flag_1092c24 = 0;
}
} } }
