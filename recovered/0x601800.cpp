typedef void (*vfn1)(void*, int);

extern "C" bool requestFire_601800(void* self, bool flag, bool fire)
{
    if (fire) {
        ((vfn1)(*(void***)self)[0xa0/8])(self, 1);
    }
    return true;
}
