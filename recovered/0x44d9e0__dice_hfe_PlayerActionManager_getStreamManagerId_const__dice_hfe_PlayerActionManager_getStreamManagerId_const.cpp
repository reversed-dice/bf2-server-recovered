// FUNCTION: BF2 0x44d9e0
// Reconstructed minimal type and function.
// GCC 3.4 compatible. No C++17 namespace shorthand used.
// Returns int stored at offset 0x78 of the object.
struct dice_hfe_PlayerActionManager {
    char _pad[0x78];
    int m_field_78; // offset 0x78
};

int dice_hfe_PlayerActionManager_getStreamManagerId_const(const dice_hfe_PlayerActionManager *this_ptr) {
    return this_ptr->m_field_78;
}