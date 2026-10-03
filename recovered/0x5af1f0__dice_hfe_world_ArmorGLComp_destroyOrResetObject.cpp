// FUNCTION: BF2 0x5af1f0
typedef int (*vfn1)(void*);
typedef long (*vfn1b)(void*);
typedef void* (*vfn2)(void*, unsigned int);
typedef void (*vfn3)(void*, void*);

extern "C" unsigned int g_cid_5af1f0;
extern "C" unsigned int g_iid_5af1f0;
extern "C" void* g_game_5af1f0;

extern "C" void destroyOrResetObject_5af1f0(void* self)
{
    void* tpl = *(void**)((char*)*(void**)((char*)self + 0x18) + 0x28);
    int cid = ((vfn1)(*(void***)tpl)[0x20/8])(tpl);
    if (cid == g_cid_5af1f0) {
        void* p = ((vfn2)(*(void***)*(void**)((char*)self + 0x18))[0x18/8])(*(void**)((char*)self + 0x18), g_iid_5af1f0);
        if (p && ((vfn1b)(*(void***)p)[0x20/8])(p) != 0) {
            return;
        }
    }
    ((vfn3)(*(void***)g_game_5af1f0)[0x140/8])(g_game_5af1f0, *(void**)((char*)self + 0x18));
}
