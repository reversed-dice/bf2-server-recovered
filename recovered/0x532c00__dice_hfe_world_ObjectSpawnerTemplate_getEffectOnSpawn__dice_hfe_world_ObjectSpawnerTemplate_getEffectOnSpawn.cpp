// FUNCTION: BF2 0x532c00
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    char _pad[472];               // offset 0x00
    char m_field_1d8[32];         // offset 0x1d8

    const char* getEffectOnSpawn();
};

const char* ObjectSpawnerTemplate::getEffectOnSpawn() {
    return reinterpret_cast<const char*>(&m_field_1d8);
}

} } }
