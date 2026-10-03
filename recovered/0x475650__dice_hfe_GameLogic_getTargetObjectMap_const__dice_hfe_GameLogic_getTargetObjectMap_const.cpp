// FUNCTION: BF2 0x475650
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[608];               // offset 0x00
    char m_field_260[32];         // offset 0x260

    const char* getTargetObjectMap() const;
};

const char* GameLogic::getTargetObjectMap() const {
    return reinterpret_cast<const char*>(&m_field_260);
}

} }
