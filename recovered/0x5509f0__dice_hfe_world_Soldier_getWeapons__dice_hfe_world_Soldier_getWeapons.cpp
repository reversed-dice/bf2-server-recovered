// FUNCTION: BF2 0x5509f0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    char _pad[664];               // offset 0x00
    char m_field_298[32];         // offset 0x298

    const char* getWeapons();
};

const char* Soldier::getWeapons() {
    return reinterpret_cast<const char*>(&m_field_298);
}

} } }
