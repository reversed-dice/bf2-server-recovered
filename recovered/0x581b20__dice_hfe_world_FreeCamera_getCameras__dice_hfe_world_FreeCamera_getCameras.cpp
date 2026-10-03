// FUNCTION: BF2 0x581b20
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    char _pad[680];               // offset 0x00
    char m_field_2a8[32];         // offset 0x2a8

    const char* getCameras();
};

const char* FreeCamera::getCameras() {
    return reinterpret_cast<const char*>(&m_field_2a8);
}

} } }
