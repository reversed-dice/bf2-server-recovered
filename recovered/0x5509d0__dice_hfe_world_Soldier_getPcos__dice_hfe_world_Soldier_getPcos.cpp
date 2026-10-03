// FUNCTION: BF2 0x5509d0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    char _pad[616];               // offset 0x00
    char m_field_268[32];         // offset 0x268

    const char* getPcos();
};

const char* Soldier::getPcos() {
    return reinterpret_cast<const char*>(&m_field_268);
}

} } }
