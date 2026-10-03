// FUNCTION: BF2 0x58b3e0
typedef void (*vfn1)(void*, unsigned int, int);
typedef void* (*vfn2)(void*, unsigned int, unsigned int);
typedef void (*vfn3)(void*, void*);

extern "C" unsigned int g_iid_ai_58b3e0;
extern "C" unsigned int g_iid_portal_58b3e0;
extern "C" unsigned int g_iid_sector_58b3e0;
extern "C" void* g_portalManager_58b3e0;
extern "C" void disableCachedObject_689fb0(void* self);

extern "C" void disableCachedObject_58b3e0(void* self)
{
    if (*(void**)((char*)self + 0x68)) {
        ((vfn1)(*(void***)self)[0xb0/8])(self, g_iid_ai_58b3e0, 0);
        void* p = ((vfn2)(*(void***)self)[0xb8/8])(self, g_iid_portal_58b3e0, g_iid_portal_58b3e0);
        if (p) {
            ((vfn3)(*(void***)g_portalManager_58b3e0)[0x38/8])(g_portalManager_58b3e0, self);
        }
        void* s = ((vfn2)(*(void***)self)[0xb8/8])(self, g_iid_sector_58b3e0, g_iid_sector_58b3e0);
        if (s) {
            ((vfn3)(*(void***)g_portalManager_58b3e0)[0x48/8])(g_portalManager_58b3e0, self);
        }
    }
    disableCachedObject_689fb0(self);
}
