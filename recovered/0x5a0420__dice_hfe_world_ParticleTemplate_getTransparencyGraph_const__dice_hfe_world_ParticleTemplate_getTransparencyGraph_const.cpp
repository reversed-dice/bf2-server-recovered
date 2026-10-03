// FUNCTION: BF2 0x5a0420
namespace dice { namespace hfe { namespace world {

class ParticleTemplate {
public:
    char _pad[2088];               // offset 0x00
    char m_field_828[32];         // offset 0x828

    const char* getTransparencyGraph() const;
};

const char* ParticleTemplate::getTransparencyGraph() const {
    return reinterpret_cast<const char*>(&m_field_828);
}

} } }
