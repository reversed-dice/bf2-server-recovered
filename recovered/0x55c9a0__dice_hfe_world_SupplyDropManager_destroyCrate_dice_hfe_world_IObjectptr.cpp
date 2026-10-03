// FUNCTION: BF2 0x55c9a0
namespace dice { namespace hfe { namespace world {
struct V40 {
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual bool v0x140(void* a);
};
extern void fn_55c950(void* a, int b);
extern V40* g_10c5420;
struct SDM {
    bool destroyCrate_0x55c9a0(void* arg2);
};
bool SDM::destroyCrate_0x55c9a0(void* arg2) {
    if (!arg2)
        return 0;
    fn_55c950(this, *(int*)((char*)arg2 + 0x20));
    return g_10c5420->v0x140(arg2);
}
} } }
