// FUNCTION: BF2 0x46be70
namespace dice { namespace hfe {

class GameSpyBackend {
public:
    char _pad[56];               // offset 0x00
    char m_field_38[32];         // offset 0x38

    const char* getAuthenticator();
};

const char* GameSpyBackend::getAuthenticator() {
    return reinterpret_cast<const char*>(&m_field_38);
}

} }
