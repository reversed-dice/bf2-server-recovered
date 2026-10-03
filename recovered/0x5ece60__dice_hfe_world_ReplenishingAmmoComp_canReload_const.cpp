// FUNCTION: BF2 0x5ece60
typedef char  (*isfn_5ece60)(void*);
typedef float (*getfn_5ece60)(void*);

extern "C" unsigned long long can_reload_5ece60(char* self) {
    if ((*(isfn_5ece60*)(*(char**)self + 0x140))(self) != 0) return 0;
    float v = (*(getfn_5ece60*)(*(char**)self + 0x1e8))(self);
    unsigned long long r = 1;
    if (v < *(float*)(*(char**)(self + 0xb0) + 0x6c)) r = 0;
    return r;
}
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoComp_canReload_const (0x5ece60)
