// FUNCTION: BF2 0x57c270
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    char _pad[812];               // offset 0x00
    char m_field_32c[32];         // offset 0x32c

    const char* getExternCameraTrans();
};

const char* Camera::getExternCameraTrans() {
    return reinterpret_cast<const char*>(&m_field_32c);
}

} } }
