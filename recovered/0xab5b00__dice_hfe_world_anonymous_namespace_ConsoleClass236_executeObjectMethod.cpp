// FUNCTION: BF2 0xab5b00
namespace dice { namespace hfe { namespace world {

struct Obj_ab5b00;

struct ObjMgr_ab5b00 {
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void _m6();
    virtual void _m7();
    virtual void _m8();
    virtual void _m9();
    virtual void _m10();
    virtual void _m11();
    virtual void _m12();
    virtual void _m13();
    virtual void _m14();
    virtual void _m15();
    virtual void _m16();
    virtual void _m17();
    virtual void _m18();
    virtual void _m19();
    virtual void _m20();
    virtual void _m21();
    virtual void _m22();
    virtual void _m23();
    virtual void _m24();
    virtual void _m25();
    virtual void _m26();
    virtual void _m27();
    virtual void _m28();
    virtual void _m29();
    virtual void _m30();
    virtual void _m31();
    virtual void _m32();
    virtual void _m33();
    virtual void _m34();
    virtual void _m35();
    virtual Obj_ab5b00* getActive();        // vtable +0x120
};

struct Obj_ab5b00 {
    virtual void _a0();
    virtual void _a1();
    virtual void _a2();
    virtual void _a3();
    virtual int   getType();               // vtable +0x20
    virtual void _b5();
    virtual void _b6();
    virtual void _b7();
    virtual void _b8();
    virtual void _b9();
    virtual void _b10();
    virtual void _b11();
    virtual void _b12();
    virtual void _b13();
    virtual void _b14();
    virtual void _b15();
    virtual void _b16();
    virtual void _b17();
    virtual void _b18();
    virtual void _b19();
    virtual void _b20();
    virtual void _b21();
    virtual void _b22();
    virtual void _b23();
    virtual void _b24();
    virtual void _b25();
    virtual void _b26();
    virtual void _b27();
    virtual void _b28();
    virtual void _b29();
    virtual void _b30();
    virtual void _b31();
    virtual void _b32();
    virtual void _b33();
    virtual void _b34();
    virtual void _b35();
    virtual void _b36();
    virtual void _b37();
    virtual void _b38();
    virtual void _b39();
    virtual void _b40();
    virtual void _b41();
    virtual void _b42();
    virtual void _b43();
    virtual void _b44();
    virtual void _b45();
    virtual void _b46();
    virtual void _b47();
    virtual void _b48();
    virtual void _b49();
    virtual void _b50();
    virtual void _b51();
    virtual void _b52();
    virtual void _b53();
    virtual void _b54();
    virtual void _b55();
    virtual void _b56();
    virtual void _b57();
    virtual void _b58();
    virtual void _b59();
    virtual void _b60();
    virtual void _b61();
    virtual void _b62();
    virtual void _b63();
    virtual void _b64();
    virtual void _b65();
    virtual void _b66();
    virtual void _b67();
    virtual void _b68();
    virtual void _b69();
    virtual void _b70();
    virtual void _b71();
    virtual void _b72();
    virtual void _b73();
    virtual void _b74();
    virtual void _b75();
    virtual void _b76();
    virtual void _b77();
    virtual void _b78();
    virtual void _b79();
    virtual void _b80();
    virtual void _b81();
    virtual void _b82();
    virtual void _b83();
    virtual void _b84();
    virtual void _b85();
    virtual void _b86();
    virtual void _b87();
    virtual void _b88();
    virtual void _b89();
    virtual void _b90();
    virtual void _b91();
    virtual void _b92();
    virtual void _b93();
    virtual void _b94();
    virtual void _b95();
    virtual void _b96();
    virtual void _b97();
    virtual void _b98();
    virtual void _b99();
    virtual void _b100();
    virtual void  setProp(float v);        // vtable +0x328
    virtual float getProp();               // vtable +0x330
};

struct Console_ab5b00 {
    char          _pad0[0x30];
    int           argCount;     // +0x30
    char          _pad1[0x4];
    unsigned int* arg0;         // +0x38
    char          _pad2[0xc8];
    char          hasResult;    // +0x108
    char          _pad3[0x3];
    float         result;       // +0x10c
};

extern "C" float* eom_ab5b00(Console_ab5b00* self)
{
    float* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        ObjMgr_ab5b00* om = *(ObjMgr_ab5b00**)0x0112ee48;
        Obj_ab5b00* p = om->getActive();
        Obj_ab5b00* q = p;
        if (p == 0 || p->getType() != *(int*)0x00c7ce68)
            q = 0;
        self->result = q->getProp();
        ret = &self->result;
    } else if (self->argCount == 1) {
        // Read as an INTEGER: the value crosses the lookup call in a
        // callee-saved integer register and only becomes a float at the call,
        // through the stack slot the target uses.
        unsigned int bits = *self->arg0;
        self->hasResult = 0;
        ObjMgr_ab5b00* om = *(ObjMgr_ab5b00**)0x0112ee48;
        Obj_ab5b00* p = om->getActive();
        Obj_ab5b00* q = p;
        if (p == 0 || p->getType() != *(int*)0x00c7ce68)
            q = 0;
        float f;
        *(unsigned int*)&f = bits;
        q->setProp(f);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass236_executeObjectMethod (0xab5b00)
