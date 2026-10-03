// FUNCTION: BF2 0x5077f0
namespace dice { namespace hfe { namespace world {

class SimpleObjectTemplate {
public:
    char _pad[376];               // offset 0x00
    char m_field_178[32];         // offset 0x178

    const char* getGeometry();
};

const char* SimpleObjectTemplate::getGeometry() {
    return reinterpret_cast<const char*>(&m_field_178);
}

} } }
