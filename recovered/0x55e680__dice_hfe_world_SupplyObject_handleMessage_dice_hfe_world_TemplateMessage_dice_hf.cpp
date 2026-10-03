// FUNCTION: BF2 0x55e680
extern "C" void fn_55e460(void* self, float f);

extern "C" void fn_55e680(void* self, int arg)
{
    if (arg == 0x1d) {
        fn_55e460(self, *(float*)0xb34b58);
        void* g = *(void**)0x112ee48;
        void** vt = *(void***)g;
        ((void (*)(void*, void*, int, float))vt[0x34])(g, self, 0x1d, *(float*)0xb34b58);
    }
}
