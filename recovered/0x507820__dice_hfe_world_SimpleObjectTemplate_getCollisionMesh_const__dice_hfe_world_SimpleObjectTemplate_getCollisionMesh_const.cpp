// FUNCTION: BF2 0x507820
namespace dice { namespace hfe { namespace world {

class SimpleObjectTemplate {
public:
    char _pad[392];               // offset 0x00
    char m_field_188[32];         // offset 0x188

    const char* getCollisionMesh() const;
};

const char* SimpleObjectTemplate::getCollisionMesh() const {
    return reinterpret_cast<const char*>(&m_field_188);
}

} } }
