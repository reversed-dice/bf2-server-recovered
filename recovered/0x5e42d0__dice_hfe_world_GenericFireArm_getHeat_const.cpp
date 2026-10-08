// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x5e42d0
namespace dice { namespace hfe { namespace world {

extern int IID_IPlayerControlObject;

struct FlagHolder {
    unsigned char pad[0x244];
    char flag;
};

class INode {
public:
    virtual void n0();
    virtual void n1();
    virtual void n2();
    virtual void* queryInterface(int iid);
    unsigned char pad[0x48];
    INode* next;
};

class IFound {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void* getTarget(int which);
};

class IHeat {
public:
    virtual void h0();
    virtual void h1();
    virtual void h2();
    virtual void h3();
    virtual void h4();
    virtual void h5();
    virtual void h6();
    virtual void h7();
    virtual void h8();
    virtual void h9();
    virtual void h10();
    virtual void h11();
    virtual void h12();
    virtual void h13();
    virtual void h14();
    virtual void h15();
    virtual void h16();
    virtual void h17();
    virtual void h18();
    virtual void h19();
    virtual void h20();
    virtual void h21();
    virtual void h22();
    virtual void h23();
    virtual void h24();
    virtual void h25();
    virtual void h26();
    virtual void h27();
    virtual void h28();
    virtual void h29();
    virtual void h30();
    virtual void h31();
    virtual void h32();
    virtual void h33();
    virtual void h34();
    virtual void h35();
    virtual void h36();
    virtual void h37();
    virtual void h38();
    virtual void h39();
    virtual void h40();
    virtual void h41();
    virtual void h42();
    virtual void h43();
    virtual void h44();
    virtual void h45();
    virtual void h46();
    virtual void h47();
    virtual void h48();
    virtual void h49();
    virtual void h50();
    virtual void h51();
    virtual void h52();
    virtual void h53();
    virtual void h54();
    virtual void h55();
    virtual void h56();
    virtual void h57();
    virtual void h58();
    virtual void h59();
    virtual void h60();
    virtual void h61();
    virtual void h62();
    virtual void h63();
    virtual void h64();
    virtual void h65();
    virtual void h66();
    virtual void h67();
    virtual void h68();
    virtual void h69();
    virtual void h70();
    virtual void h71();
    virtual void h72();
    virtual void h73();
    virtual void h74();
    virtual void h75();
    virtual void h76();
    virtual void h77();
    virtual void h78();
    virtual void h79();
    virtual void h80();
    virtual void h81();
    virtual void h82();
    virtual void h83();
    virtual void h84();
    virtual void h85();
    virtual void h86();
    virtual void h87();
    virtual void h88();
    virtual void h89();
    virtual void h90();
    virtual void h91();
    virtual void h92();
    virtual void h93();
    virtual void h94();
    virtual void h95();
    virtual void h96();
    virtual void h97();
    virtual void h98();
    virtual void h99();
    virtual void h100();
    virtual void h101();
    virtual void h102();
    virtual void h103();
    virtual void h104();
    virtual void h105();
    virtual void h106();
    virtual void h107();
    virtual void h108();
    virtual void h109();
    virtual void h110();
    virtual void h111();
    virtual void h112();
    virtual void h113();
    virtual void h114();
    virtual void h115();
    virtual void h116();
    virtual void h117();
    virtual void h118();
    virtual void h119();
    virtual void h120();
    virtual void h121();
    virtual void h122();
    virtual void h123();
    virtual void h124();
    virtual void h125();
    virtual void h126();
    virtual void h127();
    virtual void h128();
    virtual void h129();
    virtual void h130();
    virtual float getHeat();
};

class GenericFireArm {
public:
    float getHeat() const;
    unsigned char pad0[0x50];
    INode* m_head;
    unsigned char pad1[0x2f8 - 0x58];
    float m_heat;
    unsigned char pad2[0x330 - 0x2fc];
    void* m_p330;
};

float GenericFireArm::getHeat() const {
    if (((FlagHolder*)m_p330)->flag != 0) {
        for (INode* n = m_head; n != 0; n = n->next) {
            IFound* q = (IFound*)n->queryInterface(IID_IPlayerControlObject);
            if (q != 0) {
                IHeat* w = (IHeat*)q->getTarget(0);
                if (w != 0)
                    return w->getHeat();
                return 0.0f;
            }
        }
    }
    else {
        return m_heat;
    }
    return 0.0f;
}

} } }
