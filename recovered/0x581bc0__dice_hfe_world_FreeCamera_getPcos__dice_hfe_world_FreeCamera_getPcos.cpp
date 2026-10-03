// FUNCTION: BF2 0x581bc0
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    char _pad[728];               // offset 0x00
    char m_field_2d8[32];         // offset 0x2d8

    const char* getPcos();
};

const char* FreeCamera::getPcos() {
    return reinterpret_cast<const char*>(&m_field_2d8);
}

} } }
