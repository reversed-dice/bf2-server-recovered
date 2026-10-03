// FUNCTION: BF2 0x7dadf0
extern "C" void fn_007db5c0(void*);
struct C7dadf0 {
    virtual void s0();
    virtual void s1();
    virtual ~C7dadf0();
};
C7dadf0::~C7dadf0() { fn_007db5c0((char*)this + 0x10); }
