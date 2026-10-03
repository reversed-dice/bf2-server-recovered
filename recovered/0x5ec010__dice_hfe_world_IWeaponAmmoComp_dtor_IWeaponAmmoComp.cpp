// FUNCTION: BF2 0x5ec010
namespace dice { namespace hfe { namespace world {
extern void func_0x004085b8(void*);
void dtor_0x5ec010(void* p) {
    *(void**)p = (void*)0xb6ff30;
    func_0x004085b8(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_IWeaponAmmoComp_dtor_IWeaponAmmoComp (0x5ec010)
