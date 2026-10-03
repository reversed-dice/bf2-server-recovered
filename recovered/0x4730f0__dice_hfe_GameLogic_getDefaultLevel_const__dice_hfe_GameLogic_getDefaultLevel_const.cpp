// FUNCTION: BF2 0x4730f0
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[1152];               // offset 0x00
    char m_field_480[32];         // offset 0x480

    const char* getDefaultLevel() const;
};

const char* GameLogic::getDefaultLevel() const {
    return reinterpret_cast<const char*>(&m_field_480);
}

} }
