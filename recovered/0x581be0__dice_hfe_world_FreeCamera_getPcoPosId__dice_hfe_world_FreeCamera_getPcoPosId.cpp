// FUNCTION: BF2 0x581be0
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    char _pad[776];               // offset 0x00
    char m_field_308[32];         // offset 0x308

    const char* getPcoPosId();
};

const char* FreeCamera::getPcoPosId() {
    return reinterpret_cast<const char*>(&m_field_308);
}

} } }
