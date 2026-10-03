// FUNCTION: BF2 0x6ff770

extern "C" void* Vec3_getZero_7340c0();
typedef void* (*Fn)(void*);

extern "C" void* getSecondaryScale_6ff770(long* param_1) {
    int n = *(int*)((char*)param_1 + 0x28);
    n = n * n;
    if (n > 0) {
        long* p = *(long**)((char*)param_1 + 0x30);
        int i = 0;
        do {
            long* v = (long*)*p;
            if (v != 0 && v != *(long**)((char*)param_1 + 0x20)) {
                void** vtbl = *(void***)v;
                Fn fn = (Fn)vtbl[0xb0 / 8];
                return fn(v);
            }
            i = i + 1;
            p = p + 1;
        } while (i != n);
    }
    return Vec3_getZero_7340c0();
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getSecondaryScale_const (0x6ff770)
