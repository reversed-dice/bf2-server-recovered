extern "C" void* alloc_407508(unsigned int);
extern "C" void fn_7da380(void*);
extern "C" char fn_7da220(void*, int);
typedef void (*vfn8)(void*);

extern "C" void* createSocket_7d9c20(void* self, void* a)
{
    void* s = alloc_407508(0x38);
    fn_7da380(s);
    void* r = s;
    if (!fn_7da220(s, 0)) {
        if (s) {
            ((vfn8)(*(void***)s)[0x8/8])(s);
        }
        r = 0;
    }
    return r;
}
