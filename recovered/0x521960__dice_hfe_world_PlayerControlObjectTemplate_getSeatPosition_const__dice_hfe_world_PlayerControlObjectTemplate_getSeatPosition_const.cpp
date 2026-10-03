// FUNCTION: BF2 0x521960
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    char _pad[576];               // offset 0x00
    char m_field_240[32];         // offset 0x240

    const char* getSeatPosition() const;
};

const char* PlayerControlObjectTemplate::getSeatPosition() const {
    return reinterpret_cast<const char*>(&m_field_240);
}

} } }
