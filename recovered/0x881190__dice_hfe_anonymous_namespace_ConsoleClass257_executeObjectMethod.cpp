// FUNCTION: BF2 0x881190
namespace dice { namespace hfe {

// Real virtual slots, declared and never defined: slot index = offset / 8.
// Function-pointer casts here cost a second copy of the object pointer, the
// wrong register zeroed on the guard's failure path and a PUSH-based frame.
struct Obj_881190 {
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
    virtual void _p57();
    virtual void _p58();
    virtual void _p59();
    virtual void _p60();
    virtual void _p61();
    virtual void _p62();
    virtual void _p63();
    virtual void _p64();
    virtual void _p65();
    virtual void _p66();
    virtual void _p67();
    virtual void _p68();
    virtual void _p69();
    virtual void _p70();
    virtual void _p71();
    virtual void _p72();
    virtual void _p73();
    virtual void _p74();
    virtual void _p75();
    virtual void _p76();
    virtual void _p77();
    virtual void _p78();
    virtual void _p79();
    virtual void _p80();
    virtual void _p81();
    virtual void _p82();
    virtual void _p83();
    virtual void _p84();
    virtual void setValue(unsigned int v);
    virtual unsigned int getValue();
};

struct Mgr_881190 {
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
    virtual Obj_881190* getLocal();
};

struct Console_881190 {
    char          _pad0[0x30];
    int           argCount;
    char          _pad1[0x4];
    unsigned int* arg0;
    char          _pad2[0xc8];
    char          hasResult;
    char          _pad3[0x3];
    unsigned int  result;
};

extern "C" unsigned int* eom_881190(Console_881190* self)
{
    // One merged return: apply_return_prediction only fires on an SSA phi.
    unsigned int* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Obj_881190* p = 0;
        Mgr_881190* m = *(Mgr_881190**)0x0112ee38;
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
        Obj_881190* p = 0;
        Mgr_881190* m = *(Mgr_881190**)0x0112ee38;
        if (m) p = m->getLocal();
        p->setValue(v);
    }
    return ret;
}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass257_executeObjectMethod (0x881190)
