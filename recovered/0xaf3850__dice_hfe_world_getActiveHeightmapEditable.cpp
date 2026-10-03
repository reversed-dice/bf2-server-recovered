// FUNCTION: BF2 0xaf3850
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, unsigned int);

extern "C" void* g_heightmapCluster_af3850;
extern "C" unsigned int g_iid_af3850;

extern "C" void* getActiveHeightmapEditable_af3850(void)
{
    void* c = g_heightmapCluster_af3850;
    if (__builtin_expect(c == 0, 1)) {
        return 0;
    }
    void* p = ((vfn1)(*(void***)c)[0x80/8])(c);
    if (p == 0) {
        return 0;
    }
    void* q = ((vfn1)(*(void***)g_heightmapCluster_af3850)[0x80/8])(g_heightmapCluster_af3850);
    return ((vfn2)(*(void***)q)[0x18/8])(q, g_iid_af3850);
}
