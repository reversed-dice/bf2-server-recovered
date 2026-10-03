// FUNCTION: BF2 0x521180
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    char _pad[824];               // offset 0x00
    char m_field_338[32];         // offset 0x338

    const char* getWeapons();
};

const char* PlayerControlObject::getWeapons() {
    return reinterpret_cast<const char*>(&m_field_338);
}

} } }
