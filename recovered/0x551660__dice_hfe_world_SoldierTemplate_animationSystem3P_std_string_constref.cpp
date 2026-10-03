// FUNCTION: BF2 0x551660
typedef void* (*vfn)(void*);
void fn_0x551660(void* self, void* strParam) {
    void* g = *(void**)(0x010935c8);
    void* r = ((vfn)(*(void***)g)[0x18/8])(g);
    *(void**)((char*)self + 0x2c8) = (void*)r;
}
// REVERSED_FUNCTION: dice_hfe_world_SoldierTemplate_animationSystem3P_std_string_constref (0x551660)
