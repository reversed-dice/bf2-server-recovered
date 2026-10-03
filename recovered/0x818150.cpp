extern "C" void fn_816fc0();
extern "C" void fn_817df0();
extern "C" void fn_83ef10(void*);
extern "C" void fn_816fd0();
extern "C" void fn_816fb0();
extern "C" void* g_114b9c8;
extern "C" int g_10b07d8;

extern "C" void ghttpCleanup_818150()
{
    fn_816fc0();
    if (--g_10b07d8 == 0) {
        fn_817df0();
        if (g_114b9c8) {
            fn_83ef10(g_114b9c8);
            g_114b9c8 = 0;
        }
        fn_816fd0();
        fn_816fb0();
    } else {
        fn_816fd0();
    }
}
