// FUNCTION: BF2 0x8411f0
extern void fn_74af10(void*);
extern void fn_74af20(void*);
extern void* fn_846eb0(void);
extern void fn_846ef0(void*, int, char const*);
extern void fn_841020(void*);

struct Conn {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
};

int fn_8411f0(void* self)
{
    void* mutex = (char*)self + 0x10;
    int result;
    fn_74af10(mutex);
    *(int*)((char*)self + 0x30) = 1;
    if (*(unsigned char*)self == 0) {
        fn_846ef0(fn_846eb0(), 3, "Attempted to shudown server not running");
        result = -4;
    } else {
        fn_841020(self);
        Conn* p = *(Conn**)((char*)self + 8);
        if (p != 0) {
            p->m1();
            p = *(Conn**)((char*)self + 8);
            if (p != 0)
                p->m10();
            *(void**)((char*)self + 8) = 0;
        }
        *(unsigned char*)self = 0;
        result = 1;
    }
    fn_74af20(mutex);
    return result;
}
