// FUNCTION: BF2 0x436470
// Reconstructed minimal types + function for 0x436470
// Keeps layout: m_field_1e4 at offset 0x1e4.
struct dice_hfe_ClientConnection {
    char _pad[0x1e4];
    unsigned char m_field_1e4; // offset 0x1e4
};

// Free function matching symbol: dice_hfe_ClientConnection_getContentValid_const
unsigned char dice_hfe_ClientConnection_getContentValid_const(const dice_hfe_ClientConnection* this_ptr) {
    return this_ptr->m_field_1e4;
}