// FUNCTION: BF2 0x569b00
extern "C" void* g_108f2a0;
extern "C" void* g_10b3730;

typedef void (*vfn30)(void*);
typedef void (*vfn60)(void*, int, void*);

extern "C" void UAVVehicleManager_dtor_569b00(void* self)
{
    *(void**)self = (void*)0xb542c0;
    void* a = *(void**)((char*)self + 0x8);
    if (a) ((vfn30)(*(void***)a)[0x30/8])(a);
    void* b = *(void**)((char*)self + 0x10);
    if (b) ((vfn30)(*(void***)b)[0x30/8])(b);
    *(char*)((char*)self + 0x18) = 0;
    *(char*)((char*)self + 0x19) = 0;
    if (self == g_108f2a0) {
        ((vfn60)(*(void***)g_10b3730)[0x60/8])(g_10b3730, 0, self);
        g_108f2a0 = 0;
    }
}
