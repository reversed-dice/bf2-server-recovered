// FUNCTION: BF2 0x4bef40
extern "C" void* fn_407508(unsigned long);
extern "C" void fn_439b10(void*);
extern "C" void* g_game; // dice::hfe::game

extern "C" int f_4bef40(void* self, int a, int b, int c, bool d)
{
    (void)self;
    if (g_game != 0) {
        void (*send)(void*, int, void*) = (void (*)(void*, int, void*))(*(void***)g_game)[0x120 / 8];
        void* ev = fn_407508(0x18);
        fn_439b10(ev);
        *(unsigned char*)((char*)ev + 0x10) = (unsigned char)a;
        *(unsigned char*)((char*)ev + 0x12) = (unsigned char)b;
        *(unsigned char*)((char*)ev + 0x11) = (unsigned char)c;
        *(void**)ev = (void*)0xb2d2f0;
        *(unsigned char*)((char*)ev + 0x13) = (unsigned char)d;
        send(g_game, -1, ev);
    }
    return 1;
}
