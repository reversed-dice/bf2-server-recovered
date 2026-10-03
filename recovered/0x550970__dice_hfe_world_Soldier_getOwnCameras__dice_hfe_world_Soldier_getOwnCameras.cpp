// FUNCTION: BF2 0x550970
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    char _pad[800];               // offset 0x00
    char m_field_320[32];         // offset 0x320

    const char* getOwnCameras();
};

const char* Soldier::getOwnCameras() {
    return reinterpret_cast<const char*>(&m_field_320);
}

} } }
