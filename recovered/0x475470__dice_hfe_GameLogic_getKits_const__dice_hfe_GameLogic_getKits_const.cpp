// FUNCTION: BF2 0x475470
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[72];               // offset 0x00
    char m_field_48[32];         // offset 0x48

    const char* getKits() const;
};

const char* GameLogic::getKits() const {
    return reinterpret_cast<const char*>(&m_field_48);
}

} }
