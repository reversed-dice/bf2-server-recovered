// FUNCTION: BF2 0x513570
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    char _pad[528];               // offset 0x00
    char m_field_210[32];         // offset 0x210

    const char* getControlPointName();
};

const char* ControlPointTemplate::getControlPointName() {
    return reinterpret_cast<const char*>(&m_field_210);
}

} } }
