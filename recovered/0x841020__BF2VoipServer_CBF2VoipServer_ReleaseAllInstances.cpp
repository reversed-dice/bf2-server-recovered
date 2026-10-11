// FUNCTION: BF2 0x841020
extern void fn_74af10(void*);
extern void fn_74af20(void*);
extern void* fn_846eb0(void);
extern void fn_846ef0(void*, int, char const*);
extern void* fn_841280(void*, void*);

struct Instance {
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
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
};

int fn_841020(void* self)
{
    void* mutex = (char*)self + 0x10;
    int result;
    fn_74af10(mutex);
    if (*(unsigned char*)self == 0) {
        fn_846ef0(fn_846eb0(), 3,
                  "Attempted to release all instances while server has not been started");
        result = -4;
    } else {
        Instance** begin = *(Instance***)((char*)self + 0x18);
        while (begin != *(Instance***)((char*)self + 0x20)) {
            Instance* inst = *begin;
            inst->m14();
            inst->m6();
            begin = (Instance**)fn_841280((char*)self + 0x18, begin);
        }
        result = 1;
    }
    fn_74af20(mutex);
    return result;
}
