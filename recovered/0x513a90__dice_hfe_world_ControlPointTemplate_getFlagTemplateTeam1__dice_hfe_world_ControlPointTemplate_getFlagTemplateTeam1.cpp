// FUNCTION: BF2 0x513a90
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    char _pad[672];               // offset 0x00
    char m_field_2a0[32];         // offset 0x2a0

    const char* getFlagTemplateTeam1();
};

const char* ControlPointTemplate::getFlagTemplateTeam1() {
    return reinterpret_cast<const char*>(&m_field_2a0);
}

} } }
