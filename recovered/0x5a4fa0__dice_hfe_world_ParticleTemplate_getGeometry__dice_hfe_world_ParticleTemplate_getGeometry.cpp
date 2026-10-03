// FUNCTION: BF2 0x5a4fa0
namespace dice { namespace hfe { namespace world {

class ParticleTemplate {
public:
    char _pad[120];               // offset 0x00
    char m_field_78[32];         // offset 0x78

    const char* getGeometry();
};

const char* ParticleTemplate::getGeometry() {
    return reinterpret_cast<const char*>(&m_field_78);
}

} } }
