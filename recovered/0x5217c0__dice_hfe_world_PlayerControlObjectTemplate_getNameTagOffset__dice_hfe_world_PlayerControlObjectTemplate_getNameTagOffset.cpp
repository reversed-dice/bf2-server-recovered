// FUNCTION: BF2 0x5217c0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    char _pad[632];               // offset 0x00
    char m_field_278[32];         // offset 0x278

    const char* getNameTagOffset();
};

const char* PlayerControlObjectTemplate::getNameTagOffset() {
    return reinterpret_cast<const char*>(&m_field_278);
}

} } }
