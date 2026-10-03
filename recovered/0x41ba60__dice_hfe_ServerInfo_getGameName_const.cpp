// FUNCTION: BF2 0x41ba60
class dice_hfe_ServerInfo {
public:
    void*         __vmt;               // offset 0x00 — vtable pointer (8 bytes on x86-64)
    char          m_gameName[32];      // offset 0x08 — inline name buffer
    unsigned char m_requestResponse;   // offset 0x28 — request response flag

    const char*    getGameName() const;
    unsigned char  getRequestResponse() const;
};

const char* dice_hfe_ServerInfo::getGameName() const {
    return reinterpret_cast<const char*>(&m_gameName);
}