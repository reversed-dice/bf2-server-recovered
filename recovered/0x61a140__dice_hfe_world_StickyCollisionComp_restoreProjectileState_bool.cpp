// FUNCTION: BF2 0x61a140
extern "C" void f_61a140(void* self, bool keep)
{
    void* q = *(void**)((char*)self + 0x10);
    if (q == 0) return;
    void* p = *(void**)((char*)q + 0x50);
    if (p == 0) return;
    if (keep) return;
    ((void (*)(void*, void*))(*(void***)p)[0x1f0 / 8])(p, q);
}
// REVERSED_FUNCTION: dice_hfe_world_StickyCollisionComp_restoreProjectileState_bool (0x61a140)
