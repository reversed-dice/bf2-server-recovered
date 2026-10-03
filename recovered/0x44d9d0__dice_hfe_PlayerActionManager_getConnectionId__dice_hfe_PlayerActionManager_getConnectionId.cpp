// FUNCTION: BF2 0x44d9d0
struct dice_hfe_PlayerActionManager {
    char _pad[0x14];
    int m_field_14; // offset 0x14
};

int dice_hfe_PlayerActionManager_getConnectionId(dice_hfe_PlayerActionManager *this_ptr) {
    return this_ptr->m_field_14;
}