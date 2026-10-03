// FUNCTION: BF2 0x7baf60
extern "C" void fn_007bdeb0(void*);
struct C7baf60 {
    virtual void s0();
    virtual void s1();
    virtual ~C7baf60();
};
C7baf60::~C7baf60() { fn_007bdeb0((char*)this + 0x8); }
