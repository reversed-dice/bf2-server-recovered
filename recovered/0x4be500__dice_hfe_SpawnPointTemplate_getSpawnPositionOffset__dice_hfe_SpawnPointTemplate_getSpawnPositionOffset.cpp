// FUNCTION: BF2 0x4be500
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    char _pad[116];               // offset 0x00
    char m_field_74[32];         // offset 0x74

    const char* getSpawnPositionOffset();
};

const char* SpawnPointTemplate::getSpawnPositionOffset() {
    return reinterpret_cast<const char*>(&m_field_74);
}

} }
