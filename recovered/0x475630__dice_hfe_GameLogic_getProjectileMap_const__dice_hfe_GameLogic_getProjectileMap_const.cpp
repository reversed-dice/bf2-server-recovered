// FUNCTION: BF2 0x475630
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[560];               // offset 0x00
    char m_field_230[32];         // offset 0x230

    const char* getProjectileMap() const;
};

const char* GameLogic::getProjectileMap() const {
    return reinterpret_cast<const char*>(&m_field_230);
}

} }
