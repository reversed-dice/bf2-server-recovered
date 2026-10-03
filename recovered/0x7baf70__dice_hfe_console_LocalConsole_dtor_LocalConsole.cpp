// FUNCTION: BF2 0x7baf70
extern "C" void fn_7bdeb0(void*);
struct LocalConsole {
    virtual void s0();
    virtual void s1();
    virtual ~LocalConsole();
};
LocalConsole::~LocalConsole() { fn_7bdeb0((char*)this + 0x8); }
