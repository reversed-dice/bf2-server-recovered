// FUNCTION: BF2 0x44da00
// Reconstructed minimal type and function.
// GCC 3.4 compatible. No C++17 namespace shorthand used.
// Returns int stored at offset 0x10 of the object.
struct dice_hfe_PlayerActionManager {
    char _pad[0x10];
    int m_field_10; // offset 0x10
};

int dice_hfe_PlayerActionManager_getRef(dice_hfe_PlayerActionManager *this_ptr) {
    return this_ptr->m_field_10;
}