// FUNCTION: BF2 0x7897d0
typedef void* (*FnGeom_7897d0)(void*);
typedef char  (*FnD0_7897d0)(void*);
typedef void* (*Fn1b8_7897d0)(void*);
typedef void  (*Fn170_7897d0)(void*, void*, int, void*, void*, void*);
typedef void  (*Fn1a0_7897d0)(void*, void*);

extern void fn_789be0(void*, void*);

extern "C" void init_7897d0(char* self)
{
    *(int*)(self + 0x18) = *(int*)(*(char**)(self + 0x10) + 8);

    char* geom = (char*)(*(FnGeom_7897d0*)(*(char**)*(void**)(self + 8) + 0x40))(*(void**)(self + 8));
    *(void**)(self + 0x20) = *(void**)(geom + 0x88);

    if (!*(char*)(*(char**)(self + 0x10) + 0x20))
        fn_789be0(*(char**)(self + 0x10), *(void**)(self + 8));

    if (!*(char*)(*(char**)(self + 0x10) + 0x21))
        return;

    if ((*(FnD0_7897d0*)(*(char**)*(void**)0x10ade38 + 0xd0))(*(void**)0x10ade38))
        return;

    char* r = (char*)(*(FnGeom_7897d0*)(*(char**)*(void**)(self + 8) + 0x40))(*(void**)(self + 8));
    char* node = *(char**)(r + 0x28);

    void* courier = *(void**)0x10add68;
    void** vt = *(void***)courier;
    Fn170_7897d0 fn = (Fn170_7897d0)vt[0x170 / 8];

    fn(courier, self + 0x28, (int)*(unsigned char*)(node + 0x201), node + 0x204, node + 0x210,
       (*(Fn1b8_7897d0*)(*(char**)*(void**)(self + 8) + 0x1b8))(*(void**)(self + 8)));
    (*(Fn1a0_7897d0*)(*(char**)*(void**)0x10add68 + 0x1a0))(*(void**)0x10add68, *(void**)(self + 8));
}
