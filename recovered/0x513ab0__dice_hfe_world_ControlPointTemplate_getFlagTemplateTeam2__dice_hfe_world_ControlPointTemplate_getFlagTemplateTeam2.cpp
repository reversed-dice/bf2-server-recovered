// FUNCTION: BF2 0x513ab0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    char _pad[680];               // offset 0x00
    char m_field_2a8[32];         // offset 0x2a8

    const char* getFlagTemplateTeam2();
};

const char* ControlPointTemplate::getFlagTemplateTeam2() {
    return reinterpret_cast<const char*>(&m_field_2a8);
}

} } }
