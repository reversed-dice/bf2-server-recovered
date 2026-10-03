extern "C" void* g_mgr;
extern "C" int g_iid;
typedef void (*vfn1)(void*);
typedef void (*vfn2)(void*, int, int);

extern "C" void removeResponsePhysicsComponent_69faf0(void* self, void* obj)
{
    if (*(void**)((char*)obj + 0x90)) {
        if (g_mgr) {
            ((vfn1)(*(void***)g_mgr)[0x38/8])(g_mgr);
        }
        ((vfn2)(*(void***)obj)[0xb0/8])(obj, g_iid, 0);
    }
}
