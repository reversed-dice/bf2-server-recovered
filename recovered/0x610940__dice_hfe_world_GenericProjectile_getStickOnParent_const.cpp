// FUNCTION: BF2 0x610940
extern "C" void* f_610940(char* self) {
    char* p = *(char**)(self + 0x260);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x78))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getStickOnParent_const (0x610940)
