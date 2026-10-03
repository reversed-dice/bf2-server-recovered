// FUNCTION: BF2 0x4755f0
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[368];               // offset 0x00
    char m_field_170[32];         // offset 0x170

    const char* getFlagMap() const;
};

const char* GameLogic::getFlagMap() const {
    return reinterpret_cast<const char*>(&m_field_170);
}

} }
