// FUNCTION: BF2 0x436350
// Reconstructed: int dice_hfe_ClientConnection::getServerUpdateRate() const
// Accesses int at offset 0x190 from object pointer.
int dice_hfe_ClientConnection_getServerUpdateRate_const(const void* _this) {
    const char* base = reinterpret_cast<const char*>(_this);
    return *reinterpret_cast<const int*>(base + 0x190);
}