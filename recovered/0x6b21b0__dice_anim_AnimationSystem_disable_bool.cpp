// FUNCTION: BF2 0x6b21b0
extern "C" void fn_6b1ff0(void* self);

extern "C" void fn_6b21b0(void* self, unsigned char arg)
{
    if (arg) {
        void* g = *(void**)0x10aa1a8;
        void** vt = *(void***)g;
        double r = ((double (*)(void*))vt[6])(g);
        r += *(double*)0xb90db8;
        *(double*)((char*)self + 0xb0) = r;
    } else {
        fn_6b1ff0(self);
        void** vt = *(void***)self;
        ((void (*)(void*))vt[3])(self);
    }
}
