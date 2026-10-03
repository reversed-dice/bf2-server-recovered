// FUNCTION: BF2 0x87d7d0
namespace dice { namespace hfe {
struct GL {
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
    virtual void setV(unsigned*);
    virtual unsigned* getV();
};
extern "C" GL* dice_hfe_gameLogic;

long cb(long p) {
    int sel = *(int*)(p + 0x30);
    if (sel != 0) goto nz;
    {
        *(char*)(p + 0x108) = 1;
        unsigned* m = dice_hfe_gameLogic->getV();
        unsigned* out;
        // PERM_ORDER
        unsigned d = m[3];
        unsigned c = m[2];
        out = (unsigned*)(p + 0x10c);
        unsigned b = m[1];
        unsigned a = m[0];
        // PERM_ORDER_END
        // PERM_ORDER
        out[0] = a;
        out[1] = b;
        out[2] = c;
        out[3] = d;
        // PERM_ORDER_END
        return (long)out;
    }
    nz:
    if (sel != 1) return 0;
    {
        unsigned* q = *(unsigned**)(p + 0x38);
        // PERM_ORDER
        unsigned d = q[3];
        unsigned c = q[2];
        unsigned b = q[1];
        unsigned a = q[0];
        // PERM_ORDER_END
        unsigned buf[4];
        // PERM_ORDER
        buf[0] = a;
        buf[1] = b;
        buf[2] = c;
        buf[3] = d;
        // PERM_ORDER_END
        *(char*)(p + 0x108) = 0;
        dice_hfe_gameLogic->setV(buf);
        return 0;
    }
}
} }
