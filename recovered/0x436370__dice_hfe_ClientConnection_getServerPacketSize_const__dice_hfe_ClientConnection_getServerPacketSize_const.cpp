// FUNCTION: BF2 0x436370
// Reconstructed accessor for: dice_hfe::ClientConnection::getServerPacketSize() const
// Accesses 32-bit field at offset 0x198.
struct dice_hfe_ClientConnection {
    char _pad[0x198];
    int m_field_198; // offset 0x198
};

int dice_hfe_ClientConnection_getServerPacketSize_const(const dice_hfe_ClientConnection* this_ptr) {
    return this_ptr->m_field_198;
}