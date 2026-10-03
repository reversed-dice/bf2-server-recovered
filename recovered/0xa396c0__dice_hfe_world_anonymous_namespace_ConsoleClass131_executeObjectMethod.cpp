// FUNCTION: BF2 0xa396c0
namespace dice { namespace hfe { namespace world {
struct V51d {
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
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v_198(int a);
};
extern void* fn_699ea0(int a);
struct CCXr {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x38 - 0x34];
    int* m_38;
    unsigned char _pad3[0x108 - 0x40];
    char m_108;
    int execute_0xa396c0();
};
int CCXr::execute_0xa396c0() {
    if (m_30 == 1) {
        int x = *m_38;
        m_108 = 0;
        void* p = fn_699ea0(*(int*)0xc75d18);
        ((V51d*)p)->v_198(x);
    }
    return 0;
}
} } }
