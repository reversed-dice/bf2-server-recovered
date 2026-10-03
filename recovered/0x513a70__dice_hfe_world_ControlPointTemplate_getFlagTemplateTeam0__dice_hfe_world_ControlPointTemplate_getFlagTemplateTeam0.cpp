// FUNCTION: BF2 0x513a70
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    char _pad[664];               // offset 0x00
    char m_field_298[32];         // offset 0x298

    const char* getFlagTemplateTeam0();
};

const char* ControlPointTemplate::getFlagTemplateTeam0() {
    return reinterpret_cast<const char*>(&m_field_298);
}

} } }
