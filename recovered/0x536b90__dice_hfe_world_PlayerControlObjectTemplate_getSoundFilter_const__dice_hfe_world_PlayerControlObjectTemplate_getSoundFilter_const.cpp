// FUNCTION: BF2 0x536b90
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    char _pad[872];               // offset 0x00
    char m_field_368[32];         // offset 0x368

    const char* getSoundFilter() const;
};

const char* PlayerControlObjectTemplate::getSoundFilter() const {
    return reinterpret_cast<const char*>(&m_field_368);
}

} } }
