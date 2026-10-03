// FUNCTION: BF2 0x521980
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    char _pad[528];               // offset 0x00
    char m_field_210[32];         // offset 0x210

    const char* getSeatTransformation() const;
};

const char* PlayerControlObjectTemplate::getSeatTransformation() const {
    return reinterpret_cast<const char*>(&m_field_210);
}

} } }
