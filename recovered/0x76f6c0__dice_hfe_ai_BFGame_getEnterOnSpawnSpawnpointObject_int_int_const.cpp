// FUNCTION: BF2 0x76f6c0
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, int);
typedef void* (*vfn3)(void*, int, int);
typedef int (*vfn4)(void*, int);

extern "C" void* g_spawnManager_76f6c0;

extern "C" int getEnterOnSpawnSpawnpointObject_76f6c0(void* self, int param2, int param3)
{
    if (param2 != 0) {
        void* p = ((vfn1)(*(void***)g_spawnManager_76f6c0)[0x50/8])(g_spawnManager_76f6c0);
        if (p) {
            p = ((vfn2)(*(void***)p)[0x88/8])(p, 1);
            p = ((vfn3)(*(void***)p)[0x50/8])(p, 1, param3);
            void* q = *(void**)((char*)p + 0x68);
            if (q) {
                return ((vfn4)(*(void***)q)[0x170/8])(q, param3);
            }
            return -1;
        }
    }
    return 0;
}
