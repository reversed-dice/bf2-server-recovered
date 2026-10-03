// FUNCTION: BF2 0x6868f0
extern "C" void delete_4085b8(void*);
void fn_0x686940(void* self) {
    void* ptr = *(void**)((char*)self + 0xf8);
    *(void**)self = (void*)0xb8cc90;
    if (ptr) {
        *(void**)((char*)ptr + 0x8) = 0;
        void* p2 = *(void**)((char*)self + 0xf8);
        int refcnt = *(int*)p2;
        refcnt--;
        *(int*)p2 = refcnt;
        if (refcnt == 0) {
            delete_4085b8(p2);
        }
    }
    delete_4085b8(*(void**)((char*)self + 0x10));
}
// REVERSED_FUNCTION: dice_hfe_world_IObject_dtor_IObject (0x686940)
