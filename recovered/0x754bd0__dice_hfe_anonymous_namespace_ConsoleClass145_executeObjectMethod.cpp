// FUNCTION: BF2 0x754bd0
namespace dice { namespace hfe {
struct SOT {
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
    virtual void setP(unsigned*);
    virtual unsigned* getP();
};
extern "C" SOT* dice_hfe_getActiveSoundObjectTemplate();

long cb(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto nz;
    {
        *(char*)(param_1 + 0x108) = 1;
        SOT* t = dice_hfe_getActiveSoundObjectTemplate();
        unsigned* p = t->getP();
        unsigned z = p[2];
        unsigned y = p[1];
        unsigned* out = (unsigned*)(param_1 + 0x10c);
        unsigned x = p[0];
        out[0] = x;
        out[1] = y;
        out[2] = z;
        return (long)out;
    }
    nz:
    if (sel != 1) return 0;
    {
        unsigned* q = *(unsigned**)(param_1 + 0x38);
        unsigned c = q[2];
        unsigned b = q[1];
        unsigned a = q[0];
        unsigned buf[3];
        buf[1] = b;
        buf[2] = c;
        buf[0] = a;
        *(char*)(param_1 + 0x108) = 0;
        SOT* t = dice_hfe_getActiveSoundObjectTemplate();
        t->setP(buf);
        return 0;
    }
}
} }
