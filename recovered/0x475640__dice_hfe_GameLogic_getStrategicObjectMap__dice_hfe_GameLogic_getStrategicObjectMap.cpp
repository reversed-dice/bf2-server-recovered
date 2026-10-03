// FUNCTION: BF2 0x475640
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[704];               // offset 0x00
    char m_field_2c0[32];         // offset 0x2c0

    const char* getStrategicObjectMap();
};

const char* GameLogic::getStrategicObjectMap() {
    return reinterpret_cast<const char*>(&m_field_2c0);
}

} }
