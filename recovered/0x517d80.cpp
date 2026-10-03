extern "C" void* g_108caa8;
extern "C" void fn_474220(void*, int);
extern "C" void fn_589360(void*, unsigned char);

extern "C" void destroy_517d80(void* self, unsigned char flag)
{
    if (g_108caa8) {
        fn_474220(g_108caa8, *(int*)((char*)self + 0x254));
    }
    fn_589360(self, flag);
}
