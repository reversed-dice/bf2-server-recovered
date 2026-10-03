// FUNCTION: BF2 0x6a65b0
extern "C" void delete_4085b8(void*);
void fn_0x6a65b0(void* self) {
    void* ptr = *(void**)((char*)self + 0x8);
    *(void**)self = (void*)0xb8ffd0;
    if (ptr) {
        *(void**)((char*)ptr + 0x8) = 0;
        void* p2 = *(void**)((char*)self + 0x8);
        int refcnt = *(int*)p2;
        refcnt--;
        *(int*)p2 = refcnt;
        if (refcnt == 0) {
            delete_4085b8(p2);
        }
    }
    delete_4085b8(self);
}
// REVERSED_FUNCTION: dice_hfe_world_IProjectileObject_dtor_IProjectileObject (0x6a65b0)
