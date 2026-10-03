extern "C" void* g_ptr_114b9c8;
extern "C" short g_flags_114b9c0;
extern "C" void fn_83ef10(void*);
extern "C" int fn_817440(void*, short*, void**);

extern "C" int ghiSetProxy_817530(void* p)
{
    if (__builtin_expect(g_ptr_114b9c8 != 0, 1)) {
        fn_83ef10(g_ptr_114b9c8);
        g_ptr_114b9c8 = 0;
    }
    g_flags_114b9c0 = 0;
    if (p && *(char*)p) {
        return fn_817440(p, &g_flags_114b9c0, &g_ptr_114b9c8);
    }
    return 1;
}
