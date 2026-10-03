// FUNCTION: BF2 0x475660
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[656];               // offset 0x00
    char m_field_290[32];         // offset 0x290

    const char* getRemoteControlledObjectMap() const;
};

const char* GameLogic::getRemoteControlledObjectMap() const {
    return reinterpret_cast<const char*>(&m_field_290);
}

} }
