// FUNCTION: BF2 0x41bab0
#include <cstdint>

const char* dice_hfe_getEmptyString();

class dice_hfe_ServerInfo {
public:
    void*         __vmt;                // offset 0x00 — vtable pointer
    uint8_t       __pad_08[8];          // offset 0x08
    const char*   m_welcomeMsgs_begin;  // offset 0x10 — begin of welcome message storage
    const char*   m_welcomeMsgs_end;    // offset 0x18 — end of welcome message storage
    uint8_t       __pad_20[8];          // offset 0x20
    uint8_t       m_requestResponse;    // offset 0x28

    const char* getWelcomeMsg(int index) const;
};

const char* dice_hfe_ServerInfo::getWelcomeMsg(int index) const {
    const unsigned long count = (m_welcomeMsgs_end - m_welcomeMsgs_begin) >> 3;
    if (static_cast<unsigned long>(static_cast<long>(index)) < count) {
        return m_welcomeMsgs_begin + static_cast<long>(index) * 8;
    }
    return dice_hfe_getEmptyString();
}

// REVERSED_FUNCTION: dice_hfe_ServerInfo::getWelcomeMsg (0x0041bab0)