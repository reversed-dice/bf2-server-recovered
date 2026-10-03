// FUNCTION: BF2 0x60fd20
struct WeaponBasedRecoilCompTemplate {
    char m_pad[0x10];
    int m_field_10;          // offset 0x10
};

int dice_hfe_world_WeaponBasedRecoilCompTemplate_getRef(void* self) {
    return ((WeaponBasedRecoilCompTemplate*)self)->m_field_10;
}
// REVERSED_FUNCTION: dice_hfe_world_WeaponBasedRecoilCompTemplate_getRef (0x60fd20)