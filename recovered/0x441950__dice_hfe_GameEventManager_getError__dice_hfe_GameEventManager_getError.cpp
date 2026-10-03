// FUNCTION: BF2 0x441950
// Minimal layout to access field at offset 0x18
struct dice_hfe_GameEventManager {
    char _pad[0x18];
    int m_field_18; // offset 0x18
};

// Free function matching original symbol: reads int at offset 0x18 from this pointer
int dice_hfe_GameEventManager_getError(dice_hfe_GameEventManager* thisptr) {
    return thisptr->m_field_18;
}