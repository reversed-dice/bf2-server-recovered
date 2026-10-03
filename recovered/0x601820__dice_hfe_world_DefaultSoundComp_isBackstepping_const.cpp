// FUNCTION: BF2 0x601820
// dice::hfe::world::DefaultSoundComp::isBackstepping() const -- 0x601820
//
// Asks the firearm at +0x38 (falling back to +0x18) for its forcing player and
// queries the backstepping flag through the vtable at +0x58.

extern "C" void* getPlayerByForce_601820(void*);
extern char PFIsBackstepping_601820;

typedef char (*FnFlag_601820)(void*, void*);

extern "C" unsigned isBackstepping_601820(char* self)
{
    void* arm = *(void**)(self + 0x38);
    if (arm == 0) arm = *(void**)(self + 0x18);
    void* player = getPlayerByForce_601820(arm);
    if (player != 0) {
        if ((*(FnFlag_601820*)(*(char**)player + 0x58))(player, &PFIsBackstepping_601820))
            return 1;
    }
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundComp_isBackstepping_const (0x601820)
