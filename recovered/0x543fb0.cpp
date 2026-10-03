extern "C" int g_iid;
extern "C" void* fn_69a1e0();
typedef void* (*vfn1)(void*, int);
typedef int (*vfn2)(void*);

extern "C" int getTeam_543fb0(void* self)
{
    void* o = fn_69a1e0();
    void* r = ((vfn1)(*(void***)o)[0x18/8])(o, g_iid);
    if (r) {
        return ((vfn2)(*(void***)r)[0x130/8])(r);
    }
    return 0;
}
