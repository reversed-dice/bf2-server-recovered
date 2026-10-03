// FUNCTION: BF2 0x521140
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    char _pad[632];               // offset 0x00
    char m_field_278[32];         // offset 0x278

    const char* getOwnCameras();
};

const char* PlayerControlObject::getOwnCameras() {
    return reinterpret_cast<const char*>(&m_field_278);
}

} } }
