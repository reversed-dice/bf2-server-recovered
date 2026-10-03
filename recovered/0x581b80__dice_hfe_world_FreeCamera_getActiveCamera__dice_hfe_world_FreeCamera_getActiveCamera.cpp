// FUNCTION: BF2 0x581b80
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    char _pad[568];               // offset 0x00
    char m_field_238[32];         // offset 0x238

    const char* getActiveCamera();
};

const char* FreeCamera::getActiveCamera() {
    return reinterpret_cast<const char*>(&m_field_238);
}

} } }
