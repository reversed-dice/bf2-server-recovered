// FUNCTION: BF2 0x581f40
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    char _pad[812];               // offset 0x00
    char m_field_32c[32];         // offset 0x32c

    const char* getRidingWithOffset();
};

const char* FreeCamera::getRidingWithOffset() {
    return reinterpret_cast<const char*>(&m_field_32c);
}

} } }
