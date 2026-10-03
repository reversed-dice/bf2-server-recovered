// FUNCTION: BF2 0x581c40
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    char _pad[600];               // offset 0x00
    char m_field_258[32];         // offset 0x258

    const char* getWeapons();
};

const char* FreeCamera::getWeapons() {
    return reinterpret_cast<const char*>(&m_field_258);
}

} } }
