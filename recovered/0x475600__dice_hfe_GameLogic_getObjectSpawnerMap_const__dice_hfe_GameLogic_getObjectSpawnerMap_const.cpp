// FUNCTION: BF2 0x475600
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[416];               // offset 0x00
    char m_field_1a0[32];         // offset 0x1a0

    const char* getObjectSpawnerMap() const;
};

const char* GameLogic::getObjectSpawnerMap() const {
    return reinterpret_cast<const char*>(&m_field_1a0);
}

} }
