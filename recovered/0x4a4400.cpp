typedef void (*vfn3)(void*, int, int);
typedef void (*vfn2)(void*, int);

extern "C" int createPlayer_4a4400(void* self, void* obj)
{
    ((vfn3)(*(void***)obj)[0x1c8/8])(obj, 2, 0);
    ((vfn2)(*(void***)obj)[0x2a8/8])(obj, 0);
    ((vfn2)(*(void***)obj)[0xd0/8])(obj, 0);
    ((vfn2)(*(void***)obj)[0x2d8/8])(obj, 2);
    return 1;
}
