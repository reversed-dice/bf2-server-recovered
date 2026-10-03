extern "C" void* fn_8458c0(void*, void*);
extern "C" void fn_845ac0(void*, void*);

extern "C" int Remove_845630(void* self, short s)
{
    void* st = (char*)self + 0x8;
    void* end = (char*)self + 0x10;
    void* r = fn_8458c0(st, &s);
    int rc = -1;
    if (end != r) {
        fn_845ac0(st, (char*)r + 0x20);
        rc = 1;
    }
    return rc;
}
