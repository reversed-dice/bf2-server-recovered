// FUNCTION: BF2 0x686bb0
extern "C" void delete_4085b8(void*);
void fn_0x686bb0(void* self) {
    void* ptr = *(void**)((char*)self + 0x8);
    *(void**)self = (void*)0xb8d1d0;
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
// REVERSED_FUNCTION: dice_hfe_world_IPlayer_dtor_IPlayer (0x686bb0)
