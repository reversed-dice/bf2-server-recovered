// FUNCTION: BF2 0x881260
namespace dice { namespace hfe {

// Real virtual slots, declared and never defined: slot index = offset / 8.
// Function-pointer casts here cost a second copy of the object pointer, the
// wrong register zeroed on the guard's failure path and a PUSH-based frame.
struct Obj_881260 {
    virtual void _p0();
    virtual void _p1();
    virtual void _p2();
    virtual void _p3();
    virtual void _p4();
    virtual void _p5();
    virtual void _p6();
    virtual void _p7();
    virtual void _p8();
    virtual void _p9();
    virtual void _p10();
    virtual void _p11();
    virtual void _p12();
    virtual void _p13();
    virtual void _p14();
    virtual void _p15();
    virtual void _p16();
    virtual void _p17();
    virtual void _p18();
    virtual void _p19();
    virtual void _p20();
    virtual void _p21();
    virtual void _p22();
    virtual void _p23();
    virtual void _p24();
    virtual void _p25();
    virtual void _p26();
    virtual void _p27();
    virtual void _p28();
    virtual void _p29();
    virtual void _p30();
    virtual void _p31();
    virtual void _p32();
    virtual void _p33();
    virtual void _p34();
    virtual void _p35();
    virtual void _p36();
    virtual void _p37();
    virtual void _p38();
    virtual void _p39();
    virtual void _p40();
    virtual void _p41();
    virtual void _p42();
    virtual void _p43();
    virtual void _p44();
    virtual void _p45();
    virtual void _p46();
    virtual void _p47();
    virtual void _p48();
    virtual void _p49();
    virtual void _p50();
    virtual void _p51();
    virtual void _p52();
    virtual void _p53();
    virtual void _p54();
    virtual void _p55();
    virtual void _p56();
    virtual void setValue(unsigned int v, unsigned int z);
    virtual unsigned int getValue();
};

struct Mgr_881260 {
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
    virtual Obj_881260* getLocal();
};

struct Console_881260 {
    char          _pad0[0x30];
    int           argCount;
    char          _pad1[0x4];
    unsigned int* arg0;
    char          _pad2[0xc8];
    char          hasResult;
    char          _pad3[0x3];
    unsigned int  result;
};

extern "C" unsigned int* eom_881260(Console_881260* self)
{
    // One merged return: apply_return_prediction only fires on an SSA phi.
    unsigned int* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Obj_881260* p = 0;
        Mgr_881260* m = *(Mgr_881260**)0x0112ee38;
        // Only the manager is guarded; the accessor call is not.
        if (m) p = m->getLocal();
        self->result = p->getValue();
        // Named intermediate of another type: keeps the epilogue block under
        // copy_bb_p's 40-byte duplication limit.
        void* a = &self->result;
        ret = (unsigned int*)a;
    } else if (self->argCount == 1) {
        unsigned int v = *self->arg0;
        self->hasResult = 0;
        Obj_881260* p = 0;
        Mgr_881260* m = *(Mgr_881260**)0x0112ee38;
        if (m) p = m->getLocal();
        p->setValue(v, 0);
    }
    return ret;
}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass256_executeObjectMethod (0x881260)
