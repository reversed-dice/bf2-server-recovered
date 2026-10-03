// FUNCTION: BF2 0x521160
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    char _pad[696];               // offset 0x00
    char m_field_2b8[32];         // offset 0x2b8

    const char* getPcos();
};

const char* PlayerControlObject::getPcos() {
    return reinterpret_cast<const char*>(&m_field_2b8);
}

} } }
