// FUNCTION: BF2 0x521940
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    char _pad[520];               // offset 0x00
    char m_field_208[32];         // offset 0x208

    const char* getSeatParent() const;
};

const char* PlayerControlObjectTemplate::getSeatParent() const {
    return reinterpret_cast<const char*>(&m_field_208);
}

} } }
