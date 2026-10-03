// FUNCTION: BF2 0x4755e0
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[272];               // offset 0x00
    char m_field_110[32];         // offset 0x110

    const char* getControlPointMap() const;
};

const char* GameLogic::getControlPointMap() const {
    return reinterpret_cast<const char*>(&m_field_110);
}

} }
