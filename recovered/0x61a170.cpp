extern "C" void* g_1091b20;
extern "C" void fn_617130(void*, void*);
extern "C" void fn_61a140(void*, unsigned char);

extern "C" void preResetProjectile_61a170(void* self, char flag)
{
    void* p = *(void**)((char*)self + 0x18);
    if (p && g_1091b20) {
        fn_617130(g_1091b20, p);
    }
    fn_61a140(self, (unsigned char)flag);
}
