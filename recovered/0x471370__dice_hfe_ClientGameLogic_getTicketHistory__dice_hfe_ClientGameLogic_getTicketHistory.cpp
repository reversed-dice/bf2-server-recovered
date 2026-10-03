// FUNCTION: BF2 0x471370
namespace dice { namespace hfe {

class ClientGameLogic {
public:
    char _pad[1192];               // offset 0x00
    char m_field_4a8[32];         // offset 0x4a8

    const char* getTicketHistory();
};

const char* ClientGameLogic::getTicketHistory() {
    return reinterpret_cast<const char*>(&m_field_4a8);
}

} }
