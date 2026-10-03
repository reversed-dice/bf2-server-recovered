// FUNCTION: BF2 0x524ee0
extern "C" void fn_523f70(void* self);

extern "C" void fn_524ee0(void* self)
{
    fn_523f70(self);
    void* g = *(void**)0x10c5420;
    void** vt = *(void***)g;
    void* r = ((void* (*)(void*, int))vt[3])(g, *(int*)0xc76024);
    if (r) {
        void* g2 = *(void**)0x112ee48;
        void** vt2 = *(void***)g2;
        ((void (*)(void*, void*))vt2[0x35])(g2, self);
    }
}
