extern "C" int g_idx_ca1988;
extern "C" void fn_58b3e0(void*);
typedef void (*vfnB0)(void*, int, int);

extern "C" void disableCachedObject_515090(void* self)
{
    if (*(void**)((char*)self + 0x68)) {
        ((vfnB0)(*(void***)self)[0xb0/8])(self, g_idx_ca1988, 0);
    }
    fn_58b3e0(self);
}
