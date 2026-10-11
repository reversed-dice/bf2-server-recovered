// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7809d0
extern "C" {
extern long dice_hfe_squadManager;
}

struct SqOrderLocal {
    int type;
    unsigned short id;
    float w[9];
};

class MgrVTable {
public:
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
    virtual void issueSquadOrder(int, int, SqOrderLocal&, bool);
};

extern "C" void dice_hfe_ai_BFSquad_issueOrder_dice_hfe_Vec3_constref_int_int_dice_hfe_ai_IAIObjectptr_dice_hfe_SquadOrderType(
    long self, long pos, int p1, int p2, long obj, int orderType)
{
    SqOrderLocal o;
    float* p = (float*)((char*)&o + 8);
    for (unsigned long i = 3; i != 0; --i) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p += 3;
    }
    o.type = orderType;
    float* v = (float*)pos;
    float bz = v[2];
    float by = v[1];
    float bx = v[0];
    o.w[0] = bx;
    o.w[1] = by;
    o.w[2] = bz;
    o.id = 0;
    if (__builtin_expect(obj != 0, 1)) {
        long geom = ((long (*)(long))(*(long**)obj)[8])(obj);
        long rec = ((long (*)(long))(*(long**)geom)[54])(geom);
        if (rec)
            o.id = *(unsigned short*)(rec + 8);
    }
    ((MgrVTable*)dice_hfe_squadManager)->issueSquadOrder(p2, p1, o, false);
}
