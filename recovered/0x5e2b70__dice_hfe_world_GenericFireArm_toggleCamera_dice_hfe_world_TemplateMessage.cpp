// FUNCTION: BF2 0x5e2b70
namespace dice { namespace hfe { namespace world {

class Aux {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void notify(int);
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual int getCam();
};

class Aux2 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void notify();
};

class GF {
public:
    char m_pad[0x400];
};

void toggleCamera(GF* self, int msg)
{
    if (*(Aux**)((char*)self + 0x2a0) != 0) {
        int a = (*(Aux**)((char*)self + 0x2a0))->getCam();
        (*(Aux**)((char*)self + 0x2a0))->notify(msg);
        int b = (*(Aux**)((char*)self + 0x2a0))->getCam();
        if (a != b && *(Aux2**)((char*)self + 0x2a8) != 0)
            (*(Aux2**)((char*)self + 0x2a8))->notify();
    }
}

}}}
