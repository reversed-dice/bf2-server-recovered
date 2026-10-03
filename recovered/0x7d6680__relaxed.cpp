// FUNCTION: BF2 0x7d6680
extern "C" void fn_7d6370(void* p);
extern "C" void fn_74af70(void* sub);
extern "C" void operator delete(void* p);

extern "C" void fn_7d63c0(void* self)
{
    void* q = *(void**)(*(void**)self);
    if (q) {
        fn_7d6370(q);
        operator delete(q);
    }
    fn_74af70((char*)self + 0x18);
    void* p2 = *(void**)self;
    if (p2)
        operator delete(p2);
}
