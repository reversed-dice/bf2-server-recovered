extern "C" int g_iid;
typedef void* (*vfn1)(void*, int);
typedef void* (*vfn2)(void*, void*, void*);
extern "C" void* createExplosion_4d2430(void*, void*, void*);

extern "C" void handleExplosionEffect_4d24e0(void* self, void* player, void* pos, void* obj)
{
    if (obj) {
        void* p = ((vfn1)(*(void***)obj)[0x18/8])(obj, g_iid);
        if (p) {
            void* r = createExplosion_4d2430(self, pos, p);
            if (r) {
                ((vfn2)(*(void***)r)[0x0])(r, player, p);
            }
        }
    }
}
