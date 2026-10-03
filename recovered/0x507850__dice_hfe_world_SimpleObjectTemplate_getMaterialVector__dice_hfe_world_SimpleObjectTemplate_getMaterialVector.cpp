// FUNCTION: BF2 0x507850
namespace dice { namespace hfe { namespace world {

class SimpleObjectTemplate {
public:
    char _pad[280];               // offset 0x00
    char m_field_118[32];         // offset 0x118

    const char* getMaterialVector();
};

const char* SimpleObjectTemplate::getMaterialVector() {
    return reinterpret_cast<const char*>(&m_field_118);
}

} } }
