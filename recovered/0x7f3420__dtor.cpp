// FUNCTION: BF2 0x7f3420
extern "C" void fn_007f36b0(void*);
struct C7f3420 {
    virtual void s0();
    virtual void s1();
    virtual ~C7f3420();
};
C7f3420::~C7f3420() { fn_007f36b0((char*)this + 0xe8); }
