// FUNCTION: BF2 0x436330
// Reconstructed: int dice_hfe_ClientConnection::getConnectionType() const
// Accesses int at offset 0x188 from object pointer.
int dice_hfe_ClientConnection_getConnectionType_const(const void* _this) {
    const char* base = reinterpret_cast<const char*>(_this);
    return *reinterpret_cast<const int*>(base + 0x188);
}